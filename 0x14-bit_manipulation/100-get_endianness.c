#include "main.h"

/**
 * get_endianness - A function that checks if a machine is little or big endian
 * Return: The 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
