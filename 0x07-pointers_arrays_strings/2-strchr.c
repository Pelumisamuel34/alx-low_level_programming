#include "holberton.h"

char *_strchr(char *s, char c)
{
	int identify;

	for (identify = 0; s[identify] != '\0'; identify++)
	{
	if (s[identify] == c)
		{
			return(s + identify);
		}
	}

	return ('\0');
}
