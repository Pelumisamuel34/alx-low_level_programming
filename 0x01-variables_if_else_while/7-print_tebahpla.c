#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
char x;
char s = '\n';
for (x = 'z'; 'a' <= x; x--)
putchar(x);
putchar(s);
return (0);
}
