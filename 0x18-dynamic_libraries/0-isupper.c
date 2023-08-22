#include "main.h"

/**
 * _isupper - check if a character is upper
 * @c: The character that will be checked
 * Return: 1 for uppercase or 0 for any else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
