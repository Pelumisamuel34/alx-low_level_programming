#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
int number;
int comma = ',';
char space = ' ';
while (number < 10)
{
putchar(number++);
putchar(comma);
putchar(space);
}
putchar('\n');
return (0);
}
