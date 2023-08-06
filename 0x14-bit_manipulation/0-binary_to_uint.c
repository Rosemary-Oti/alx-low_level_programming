#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary string to convert.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that are not '0' or '1' or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	return (0);

	unsigned int result = 0;
	int bit;

	while (*b != '\0')
	{
	bit = *b;

	if (bit != '0' && bit != '1')
	return (0);

	result = (result << 1) + (bit - '0');

	b++;
	}

	return (result);
}
