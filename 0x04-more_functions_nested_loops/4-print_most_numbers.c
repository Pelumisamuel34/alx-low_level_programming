#include "holberton.h"

/**
*function that prints 0 to 9
*but skips 2 and 4
*create new line
*
*/

void print_most_numbers(void)
{
char i;

	for (i = 48; i <= 57; i++)
	{
	if (i = 50)
	{
	i++;
	}
	else if (i = 52)
	{
	i++;
	}
	else
	break;
	_putchar(i);
	}

_putchar('\n');
}
