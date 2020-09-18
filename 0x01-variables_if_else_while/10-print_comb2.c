#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
/*Start by creating a number variable that has 00*/
int number = 00;
/*create variable that contains comma*/
int comma = ',';
while (number <= 100)
{
/*Create loop that prints the number,*/
/* then adds, then adds space until it reaches 99*/
putchar(number++);
putchar(comma);
putchar(' ');
}
putchar('\n');
return (0);
}
