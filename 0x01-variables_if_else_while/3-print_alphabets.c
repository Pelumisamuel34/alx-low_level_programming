#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
int x;


for (x = 'A'; x <= 'Z'; x++)
{
int lower_x = tolower(x);
int upper_x = toupper(x);
putchar(lower_x);
putchar(upper_x);
putchar('\n');
}
return (0);
}
