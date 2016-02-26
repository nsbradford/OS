/**
 * globals.c
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#include "header.h"


bool BITMAP_RAM[SIZE_RAM];
bool BITMAP_SSD[SIZE_SSD];
bool BITMAP_HDD[SIZE_HDD];
uint32_t ARRAY_RAM[SIZE_RAM];
uint32_t ARRAY_SSD[SIZE_SSD];
uint32_t ARRAY_HDD[SIZE_HDD];
StorageDevice hdd = {.size = SIZE_HDD, .u_delay = DELAY_HDD, .mem_used = 0,
	.bitmap = BITMAP_HDD, .array = ARRAY_HDD};
StorageDevice ssd = {.size = SIZE_SSD, .u_delay = DELAY_SSD, .mem_used = 0,
	.bitmap = BITMAP_SSD, .array = ARRAY_SSD, .child = &hdd};
StorageDevice ram = {.size = SIZE_RAM, .u_delay = DELAY_RAM, .mem_used = 0,
	.bitmap = BITMAP_RAM, .array = ARRAY_RAM, .child = &ssd};

StorageDevice *RAM = &ram;
StorageDevice *SSD = &ssd;
StorageDevice *HDD = &hdd;

const PTE DEFAULT_PTE = {
	.present = false,
	.address = 0,
	.device = NULL,
	.offset = 0,
};
