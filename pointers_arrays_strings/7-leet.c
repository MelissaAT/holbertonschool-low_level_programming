#include "main.h"
/**
 * leet - encodes a string
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int i, j;
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4307143071";

	i = 0;
	while (s[i] != 0)
	{
		j = 0;

	       while (s1[j] != '\0')
		{
			if (s[i] == s1[j])
				s[i] = s2[j];
			j++;
		}
	       i++;
	}
	return (s);
}
