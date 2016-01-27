README

Authors:                    Nicholas Bradford (nsbradford@wpi.edu), Himanshu Sahay (hsahay@wpi.edu)
Date:                       26 January 2016 @ 11:59pm
CS Class:                   CS 3013 Operating Systems
Programming Language:       C
Problem Description:        project1

********************************
                
How to build the program:   1.  Supports, make, make all, OR make clean
                                    $ make
                                    $ make all
                                    $ make clean
                                Will create 3 executables:
                                    runCommand:
                                    shell
                                    shell2

                            2.  runCommand:
                                $ ./runCommand [Command] [arg1] [arg2] [...]
                                Ex) $ ./runCommand ls ../

                            3.  shell:
                                    $ ./shell
                                Pipe) 
                                    $ ./shell < [input.txt]
                                Will run a wrapper around the shell:
                                    prompt$

                            4.  shell2:
                                    $ ./shell2
                                Pipe:
                                    $ ./shell2 < [input.txt]
                                Will run a wrapper around the shell that allows for background tasks:
                                    prompt$
                                To run a task in the background, have the last arg be a '&' symbol:
                                    prompt$ [Command] [arg1] [arg2] [...] &

********************************

Design Notes:      

For runCommand, we print statistics even when runCommand is run without any arguments becuase that in itself is a command with usage statistics.
For shell2, if you run 1+ background commands followed by a foreground command, the output and stats will only print after the foreground task has completed.

********************************

Data Structure for Processes:

This is a global data structure
// struct for a process
typedef struct {
    pid_t pid;  // Process id
    char* cmd;  // Command
    struct timeval start_time; // time when command is started
    struct timeval end_time; // end time of command
}process;

********************************

Algorithm for Background Processes: 

In the execute function, we pass a flag for background processes. If this flag is true, we create a new process in the process list and increment the global number of processes by 1.
Then, we use wait3(WNOHANG). When a child process ends, it is removed from the list of processes and prints statistics.

If a process is a foreground process, we use wait4() and block until the process ends. Then, we get usage statistics and print them for this process.
Finally, we handle any existing background processes using the method for background processes mentioned earlier.

********************************

Test:                       See output1.txt and output2.txt for details.

                            1) runCommand: output should be exactly as expected on a normal terminal.
                                $ ./runCommand pwd
                                $ ./runCommand ls ../
                                $ ./runCommand echo 'hi'
                                $ ./runCommand ls
                                $ ./runCommand aslkdjflasdjflaksdjfk

                            2) shell: use input1.txt. 
                                $ ./shell < input.1txt
                                OR
                                $ ./shell
                                prompt$ pwd
                                prompt$ ls ../
                                prompt$ echo 'hi'
                                prompt$ aslkdjflasdjflaksdjfk
                                prompt$ ls

                            3) shell2: use input2.txt
                                $ ./shell2 < input2.txt
                                OR
                                prompt$ asdjfklsdjfkldafjalsdkfj
                                prompt$ pwd
                                prompt$ ls ../ 
                                prompt$ sleep 4 &
                                prompt$ sleep 3 &
                                prompt$ ls &
                                prompt$ sleep 1
                                prompt$ echo 'hi' 

EOF
