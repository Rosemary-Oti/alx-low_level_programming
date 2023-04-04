#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int j;
	int m;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (j = 0; j <= (size * size); j = j + size + 1)
		sum1 = sum1 + a[j];

	for (m = size - 1; m <= (size * size) - size; m = m + size - 1)
		sum2 = sum2 + a[m];
	printf("%d' %d\n", sum1, sum2);
}
