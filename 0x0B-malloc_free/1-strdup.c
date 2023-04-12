#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - A program that duplicates to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int k, r = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	aaa = malloc(sizeof(char) * (k + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
