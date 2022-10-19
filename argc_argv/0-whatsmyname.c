#include <stdio.h>
/**
 * main - Entry point
 * @argc: counts arguments
 * argv[]: s array of character pointers listing all the arguments
 * Return: Always (success)
 */
int main(int argc, char *argv[])
{
	int i;

	printf("argc: %d\n", argc);

	for (int i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);

	return (0);
}
