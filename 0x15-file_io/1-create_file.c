#include "main.h"

/**
 * create_file - A function that Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         On success - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int n, w, lenght = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}
	n = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(n, text_content, lenght);

	if (n == -1 || w == -1)
		return (-1);
	close(n);

	return (1);
}
