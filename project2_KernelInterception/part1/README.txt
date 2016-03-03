Authors: Himanshu Sahay (hsahay), Nicholas Bradford (nsbradford)

CS 3013 Project 2 - Checkpoint

To make:
	>> make

To check functionality of replaced calls:
	>> sudo insmod scanner.ko
	>> cat evil.txt
	>> grep mailicious /var/log/syslog
		- This will show the reads where malicious code was found.
	>> sudo rmmod scanner.ko

We also have a test program for checking the read functionality:
	>> gcc -o part1_test part1_test.c
	>> ./part1.c