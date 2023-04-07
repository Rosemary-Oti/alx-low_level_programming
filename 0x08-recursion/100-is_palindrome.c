#include "main.h"

int check_pal(char *s, int i, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - chech if a string is palindrome or not
 * @s: string to reverse
 * Return: 1 if it is, 0 if its not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the character of the string
 * @s: string to check
 * @i: iterator
 * @l: length of the string
 * Return: .
 */
int check_pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (check_pal(s, i + 1, l - 1));
}
