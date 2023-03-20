#include <stdio.h>

/**
 * main - print alphabet in lower and upper case
 * Return: Alwwayss 0 (succes)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
