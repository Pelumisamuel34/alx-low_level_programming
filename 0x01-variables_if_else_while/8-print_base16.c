#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
int number;
char word = 'a';
char s = '\n';
while (number <= 9)
{
putchar(number++);
}
while (word <= 'f')
{
putchar(word++);
}
putchar(s);
return (0);
}
