#include "main.h"
/**
 * read_textfile - 
 * @filename:
 * @letters:
 * Return:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, r;
	char *fp;

	fp = malloc(sizeof(letters));
	
	if (fp == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
	   return (0);
	}


	i = open(filename, O_RDONLY);
	
	if (i == -1)
	{
		free(fp);
		return (0);
	}
	r = read(i, fp, letters);

	fp[letters + 1] = '\0';

	 write(STDOUT_FILENO, fp, r);

	close(i);

	return (r);
}


