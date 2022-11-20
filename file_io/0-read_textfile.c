#include "main.h"
/**
 * read_textfile - 
 * @filename:
 * @letters:
 * Return:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
	char *fp;

	fp = malloc(sizeof(fp));
	
	if (fp == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
	   return (0);
	}


	i = open(filename, O_RDONLY);
	while (read(STDIN_FILENO, &letters, 1) != 0)
		write(STDOUT_FILENO, &i, 1);

	close(*fp);

	return (i);
}


