#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @n: The pointer to the number to change
 * @index: The index of the bit to set to 1
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 60)
		return (-1);

	*n ^= (1 << index);
	return (1);
}
