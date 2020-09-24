#include "holberton.h"

/**
*Function: Check for uppercase alphabetical characters
*return 1 if character is uppercase
*return 0 if character is not uppercase
*
*/

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{ return (1);
	}else
	return (0);
}
