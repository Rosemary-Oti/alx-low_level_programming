#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: The number to search
 * @index: The index of the bit
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal;

	if (index > 60)
		return (-1);

	bitVal = (n >> index) & 1;

	return (bitVal);
}
