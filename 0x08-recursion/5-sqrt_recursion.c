#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - A funtion that returns the natural square root of a number
 * @n: Integer
 * Return: return -1 If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Calculates natural square root
 * @n: number to calculate the square root
 * @i: iterator
 * Return: The natural square root
 */
int actual_sqrt_recursion(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
