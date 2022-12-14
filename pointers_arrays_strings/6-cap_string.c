#include "main.h"
/**
 * cap_string - capitalize all words
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}

		else if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
				|| s[i - 1] == '!' || s[i - 1] == '"'
				|| s[i - 1] == ')' || s[i - 1] == '(' || s[i - 1] == '{'
				|| s[i - 1] == '}' || s[i - 1] == '\n' || s[i - 1] == 32
				|| s[i - 1] == '\t')
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}

	return (s);
}
