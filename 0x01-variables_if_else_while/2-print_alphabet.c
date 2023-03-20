#include <stdio.h>

/**
 * main - A program that prints the alphebet in lower case and a new line
 * Return: Always 0 (succes)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
		putchar('\n');
		return (0);
}
