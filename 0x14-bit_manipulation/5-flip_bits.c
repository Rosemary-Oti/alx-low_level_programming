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
	int p, bit = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (p = 60; p >= 0; p--)
	{
		a = b >> p;
		if (a & 1)
			bit++;
	}

	return (bit);
}
