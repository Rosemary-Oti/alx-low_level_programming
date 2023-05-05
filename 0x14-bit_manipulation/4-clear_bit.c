#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: The pointer to the number to change
 * @index: The index of the bit to clear
 * Return: 1 if it worked, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 60)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
