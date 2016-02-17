README

Authors:                    Nicholas Bradford (nsbradford@wpi.edu), Himanshu Sahay (hsahay@wpi.edu)
Checkpoint:                 16 February 2016 @ 11:59pm
CS Class:                   CS 3013 Operating Systems
Programming Language:       C
Problem Description:        project3

General Approach:           Each plane is represented by a separate thread passed a main 
                            plane_function(), and a pointer to the Plane struct that holds data.
                            The possible states of plane are:
                                
                                FLYING: not yet arrived in airspace.
                                ARRIVING: in airspace, waiting to descend (burning fuel).
                                DESCENDING: flying down to a target runway (burning fuel).
                                LANDING: landing on a target runway.
                                CLEARED: made it off the runway, ready to exit.
                                GHOST: a special kind of 'null' plane.

                            "Fairness" prioritization was done by 1) whether or not a plane was 
                            initialized with is_emergency=true, and then by the amount of fuel 
                            remaining. To accomplish this, every time a plane arrives, it re-sorts 
                            the PLANE_BUFFER with all the waiting planes by n_fuel remaining. 
                            A special

                            This in turn creates a tricky added synchronization issue: when
                            a runway opens up, we cannot simply signal the plane at the front of
                            the line to DESCEND; instead, we had to use a Reusable Barrier to 
                            ensure that when a runway opened:

                                1) each plane in the queue wakes
                                2) each plane checks to see if it's at the front of the queue
                                3) each plane, except for the plane at the front, goes back asleep
                                4) the plane at the front waits for all other planes to go to sleep

                            Besides the semaphores used for the Reusable Barrier, we used four
                            semaphores to solve the synchronization problem:

                                SEM_IN_OUT;             // limits insert() or remove() 
                                SEM_BUFFER;             // locks the buffer within  insert()/remove()
                                SEM_WAIT_DONE;          // signals a CLEARED plane
                                FREE_RUNWAY;            // set to N_RUNWAYS
                                SEM_EMERGENCY;          // flag for an active emergency on a runway

                            SEM_BUFFER restricts access to the PLANE_BUFFER global.
                            SEM_IN_OUT allows control of SEM_BUFFER to pass directly from a
                                 CLEARED plane to the next plane in line, without worrying about
                                 a plane being insert()ed into the buffer during the transition.
                            SEM_WAIT_DONE is used by the CLEARED plane to wait until another 
                                plane begins to descend.
                            FREE_RUNWAY is set to the number of runways, and threads in the queue
                                wait on it while all the runways are full.
                            SEM_EMERGENCY is set to 1 when there is no active emergency landing,
                                and 0 when there is one. Whenever a plane thinks it is ready to
                                begin its descent, it checks the SEM_EMERGENCY value, and goes
                                back to sleep (remaining in the queue) if it equals 0.

Test cases:                 Our test cases were systematic and incremental.
                            Each involved changing one or more #define statements in header.h.
                            We also utilized assert() statements in nearly every function
                            to check that the semaphore values were as expected.
                            
                            The demonstration defaults: TODO