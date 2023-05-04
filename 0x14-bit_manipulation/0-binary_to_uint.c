#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: The string containing the binary number
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int n;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		dec = 2 * dec + (b[n] - '0');
	}

	return (dec);
}
