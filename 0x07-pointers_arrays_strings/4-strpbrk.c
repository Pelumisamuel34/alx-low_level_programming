#include "holberton.h"

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{		
			if (accept[i] != '\0')
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
