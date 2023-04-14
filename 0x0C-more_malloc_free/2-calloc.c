#include <stdlib.h>
#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: The number of members
 * @size: The size
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int n = 0, i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = nmemb * size;
	p = malloc(i);

	if (p == NULL)
		return (NULL);


	while (n < i)
	{
		p[n] = 0;
		n++;
	}
	return (p);
}
