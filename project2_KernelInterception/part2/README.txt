Author: Himanshu Sahay (hsahay), Nicholas Bradford (nsbradford)
CS 3013 C16 Project 2 part 2

There are 2 folders, kernel and user. "kernel" holds call23.ko which compiles to create a module that can be inserted. "user" has the code for the getloginuid and shift2user executables.

To load module:
In kernel:
>> make
>> sudo insmod call23.ko

To remove module
>> sudo rmmod call23.ko

To run user space executables:
>> make
Then, run individual executables with parameters. See tests_user.txt for examples

 Note:
 - To find a process, the linked list starts at init, and the list_for_each_entry() expands the list and goes through every task under init that are running on the system. 


