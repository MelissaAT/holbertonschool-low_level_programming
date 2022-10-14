#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: variable
 * @needle: variable
 * Return: pointer to the beginning
 */
char *_strstr(char *haystack, char *needle)
{	
	char *p1, *p2, *p3;
	int i, j, f;
	
	p1 = haystack;
	p2 = needle;

	for ( i = 0; haystack[i] != '\0'; i++)
	{
		if( *p1 == *p2)
		{
			p3 = p1;
		for (j = 0; needle[j] != '\0'; j++)
		{ 
			if ( *p3 == *p2)
			{ 
				p3++; p2++;
			}
			else 
				break;
		}
		p2 = needle;
		if (j == needle[j])
			return (haystack);
		{
			f = 1;
		}
	p1++;
}
if (f == 0)
	return (needle);
}
return (haystack);
}
