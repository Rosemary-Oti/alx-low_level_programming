#include "main.h"

int main_prime(int n, int i);

/**
 * is_prime_number - Returns if a number is prime
 * @n: The number to be checked
 * Return: Integer value
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime(n, n - 1));
}

/**
 * main_prime - check if number is prime
 * @n: the number to be checked
 * @i: iterator
 * Return: 1 for prime or 0 composite
 */
int main_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (main_prime(n, i + 1));
}
