#include <stdio.h>
/**
 * main - Entry poimt
 * @argc: command line
 * @argv:
 * Return: 
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
		return (0);
}
