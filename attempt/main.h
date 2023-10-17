#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match conversion specifier for printf
 * @type: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @func: function pointer to the function that prints the specifier
 */

typedef struct format
{
char *identifier;
int (*func)();
} format_t;

int pointerprinters(va_list args);
int unsignedlonghex(unsigned long int number);
int unsignedhex(unsigned int number);
int printallstring(va_list args);
int hexadec(va_list args);
int Hex(va_list args);
int printoctal(va_list args);
int unsignedint(va_list args);
int printbinary(va_list args);
int reversestr(va_list args);
int rot13(va_list args);
int printinteger(va_list args);
int printdecimal(va_list args);
int strlength(char *s);
int *_strcpy(char *dest, char *src);
int strlengthconst(const char *s);
int rev_str(char *s);
int strlengthconst(const char *s);
int print37(void);
int printchar(va_list args);
int printstring(va_list args);
int put_char(char c);
int _printf(const char *format, ...);

#endif
