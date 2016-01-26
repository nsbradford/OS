README

Authors:                            Nicholas Bradford (nsbradford@wpi.edu), Himanshu Sahay (hsahay@wpi.edu)
Date:                               26 January 2016 @ 11:59pm
CS Class:                           CS 3013 Operating Systems
Programming Language:               C
Problem Description:                project1
                
How to build the program:           1.  Supports, make, make all, OR make clean
                                            $ make
                                            $ make all
                                            $ make clean
                                        Will create 3 executables:
                                            runCommand
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
                                        Will run a wrapper around the shell:
                                            prompt$
        
EOF

