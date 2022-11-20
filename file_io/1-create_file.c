#include "main.h"
/**
 * create_file - function that create a file
 * @filename: name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, fp;

	if (filename == NULL)
		return (-1);

	while (text_content[i] != '\0')
	{
		i++;
	}

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	write(fp, text_content, i);

	return (1);
}
