#include "main.h"
/**
 * string_toupper - hanges all lowercase letters of a string to uppercase
 */
char *string_toupper(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] -32;
		}
	}
	return (0);
}

