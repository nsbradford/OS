/**
 * header.h
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdint.h> 	// u_int32_t

#define DEBUG true

typedef signed short vAddr;

// API functions
vAddr create_page();
uint32_t *get_value(vAddr address);
void store_value(vAddr address, uint32_t *value);
void free_page(vAddr address);

#endif
