#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)

{
char x;
char s = '\n';
char y;

for (x = 'a'; x <= 'z'; x++)
{putchar(x); }
putchar(s);
for (y = 'A'; y <= 'Z'; y++)
{putchar(y); }

return (0);
}
