#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to convert and print in binary.
 */
void print_binary(unsigned long int n)
{
	int num = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (num - 1);
	int leadZeros = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			putchar('1');
			leadZeros = 1;
		}
		else if (leadZeros)
		{
			putchar('0');
		}

		mask >>= 1;
	}

	if (!leadZeros)
		putchar('0');
}
