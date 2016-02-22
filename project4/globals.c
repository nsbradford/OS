/**
 * globals.c
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#include "header.h"

uint32_t ARRAY_RAM[SIZE_RAM];
uint32_t ARRAY_SSD[SIZE_SSD];
uint32_t ARRAY_HDD[SIZE_HDD];
StorageDevice ram = {.size = SIZE_RAM, .mem_used = 0, .array = ARRAY_RAM};
StorageDevice ssd = {.size = SIZE_SSD, .mem_used = 0, .array = ARRAY_SSD};
StorageDevice hdd = {.size = SIZE_HDD, .mem_used = 0, .array = ARRAY_HDD};
StorageDevice *RAM = &ram;
StorageDevice *SSD = &ssd;
StorageDevice *HDD = &hdd;

const PTE DEFAULT_PTE = {
	.present = false,
	.address = -1,
	.pAddr = NULL,
	.offset = -1,
};