#include "holberton.h"
/**
*Function to print 0 to 9
*followed by a new line
*return nothing
*
*/

void print_numbers(void)
{
char num;

	for (num = 48; num <= 57; num++)
	{
	_putchar(num);
	}
_putchar('\n');
}
