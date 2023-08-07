#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if it is little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *C = (char *)&num;

	/* If the value of the first byte is 1, the system is little endian */
	return (*C == 1);
}
