#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
int number;
int comma = ',';
while (number < 10)
{
putchar(number++);
putchar(comma);
putchar(' ');
}
putchar('\n');
return (0);
}
