#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
  int main()
  {
    int x;

    for(x = 'A'; x <= 'Z'; x++) /* jumps from 'A'(65) to 'B'(66) to ... in order. */
      {

	putchar(tolower(x)); putchar('\n');  /* the return value is returned as a parameter */
      }
    return 0;

}
