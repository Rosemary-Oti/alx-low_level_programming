#include "main.h"

/**
 * flip_bits - A function that counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int flip_count = 0;

	while (flip)
	{
	flip_count += flip & 1;
	flip >>= 1;

	}

	return (flip_count);
}
