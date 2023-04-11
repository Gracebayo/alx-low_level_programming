#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If it fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)

{
	int tf, a, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	tf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(tf, text_content, len);

	if (tf == -1 || a == -1)
		return (-1);

	close(tf);

	return (1);
}
