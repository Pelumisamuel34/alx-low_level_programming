#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void)
{
char school[10] = "Holberton";
int i = 0;
while (i < 9)
{
putchar(school[i]);
i++;
}
putchar('\n');
return (0);
}
