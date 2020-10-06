#include "holberton.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;

	for (; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
