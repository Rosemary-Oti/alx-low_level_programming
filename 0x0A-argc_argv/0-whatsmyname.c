#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
