#include <stdio.h>

/**
 * main - A program that prints the alphabet in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		if (la != 'e' && la != 'q')
			putchar(la);
	putchar('\n');
	return (0);
}
