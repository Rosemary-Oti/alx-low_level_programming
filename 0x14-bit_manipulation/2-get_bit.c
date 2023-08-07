#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The position of the bit to retrieve
 *
 * Return: The value of the bit at the given index, or -1
 *	if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 1UL << index;

	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);


	if (n & bit)
	return (1);

	else
	return (0);
}
