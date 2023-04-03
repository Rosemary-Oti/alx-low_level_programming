#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: The destination to be filled
 * @b: The constant byte
 * @n: The number of bytes
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
