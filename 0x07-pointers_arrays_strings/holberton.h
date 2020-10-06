#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);

/*0.memset function prototype*/
char *_memset(char *s, char b, unsigned int n);

/*1.memcpy function prototype*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*2.strchr function prototype*/
char *_strchr(char *s, char c);

/*3.strspn function prototype*/
unsigned int _strspn(char *s, char *accept);

/*4.strpbrk function prototype*/
char *_strpbrk(char *s, char *accept);

/*5.strstr function prototype*/
char *_strstr(char *haystack, char *needle);

/*6. Chess is mental torture function prototype*/
void print_chessboard(char (*a)[8]);

/* 7. The line of life is a ragged diagonal between duty and desire function prototype*/
void print_diagsums(int *a, int size);

/*8. Double pointer, double fun function prototype*/
void set_string(char **s, char *to);
 

#endif
