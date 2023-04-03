#include "main.h"

/**
 * *_memcpy - A function that copies memory area
 * @src: Copying memory area
 * @dest: The destination memory area
 * @n: Represents number of bytes
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
