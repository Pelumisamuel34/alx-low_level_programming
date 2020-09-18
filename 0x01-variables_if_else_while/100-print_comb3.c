#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
int number1 = 0;
int number2;
int comma = ',';
while (number1 < number2 && number2 <= 9)
{
putchar(number2++);
putchar(number1++);
putchar(comma);
putchar(' ');
}
putchar('\n');
return (0);
}
