#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints if number is positive, zero or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zere\n", n);
	return (0);
}
