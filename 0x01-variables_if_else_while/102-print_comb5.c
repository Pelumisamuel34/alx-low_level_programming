#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
int number1 = 0;
int comma = ',';
while (number1 <= 99)
{
putchar(number1++);
putchar(comma);
putchar(' ');
}
putchar('\n');
return (0);
}
