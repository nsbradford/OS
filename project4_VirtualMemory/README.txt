README

Authors:                    Nicholas Bradford (nsbradford@wpi.edu), Himanshu Sahay (hsahay@wpi.edu)
Checkpoint:                 26 February 2016 @ 11:59pm
CS Class:                   CS 3013 Operating Systems
Programming Language:       C
Problem Description:        project4: Implementing Virtual Memories

Notes:						This project is divided into several components:

							globals.c:
								Contains pointers to the global Page Table (PT), StorageDevices
								(RAM, SSD, HDD), and the DEFAULT_PTE that cleared pages are set to.
								These initializations cannot be done in a .h file.
							api.c:
								Contains the 4 required API calls, with wrappers to make them
								thread-safe. They are fairly simple, and relay on the 
								implementation in storage.c.
							storage.c:
								Contains the Page Fault Handler and Eviction Algorithms.
							header.h:
								Contains the important globals and API functions.
							test.c:
								Our test code.

							--

							The problem was approached from an Object-Oriented perspective:
								StorageDevice structs contain all the information regarding
							a particular device (RAM, SSD, or HDD) including max size, delay,
							memory used, bitmap, uint32_t array, and child StorageDevice.
								PTE structs contain a present/absent bit, address, StorageDevice,
							offset within that device, and reference bit. They also each come
							with a mutex and conditional variable used for multithreading.
								This approach facilitated elegant code in many ways; for example,
							Reading and Writing on individual devices could thus be handled
							elegantly by creating two helpers, read_mem() and write_mem(), that
							take in a PTE, and sleep for the delay time of the PTE's device.
								Page Eviction could thus be handled recursively, by calling
							the evict_page() function on a device's child before evicting 
							from the device itself.
								Bringing a page to ram, handled by the move_to_RAM() function,
							could thus also be done elegantly with a simple call to evict_page(RAM)
							and a copy.
								Synchonization was done over single Pages and abstracted into
							the lock_PTE() and unlock_PTE() functions, which were called whenever
							a thread wishes to access a particular page table entry.

							--

							Page Eviction Algo #1:
								FIFO (Modified): Evict the first page in the Page Table that is 
								in the requested StorageDevice.
							Page Eviction Algo #2: 
								Random: Evict a random page in the Page Table that is in the
								requested StorageDevice.
							Page Eviction Algo #3: 
								Second-Change: As described in class, use an r-bit to give 
								a "second chance" to pages that have been referenced before
								evicting them.
							
EOF