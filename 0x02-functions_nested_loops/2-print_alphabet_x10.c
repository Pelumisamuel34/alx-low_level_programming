#include "holberton.h"

void print_alphabet_x10(void)
{
	int i = 0;
char j;
for (i = 0; i <= 10; i++)
{
for (j = 'a'; j < 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
int main(void)
{
print_alphabet_x10();
return (0);
}

