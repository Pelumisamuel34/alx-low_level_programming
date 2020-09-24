/**
*Function _isdigit: Check for digit
*return 1 if it is between 0 - 9
*return 0 if input is not between 0 - 9
*/
#include "holberton.h"

int _isdigit(int c)

{

	if (c >= 48 && c <= 57)
	{return (1);
	}
	else
	{return (0);
	}

}
