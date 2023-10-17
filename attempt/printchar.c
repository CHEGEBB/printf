#include "main.h"

/**
 * printchar - prints a character
 * @args: The character to print, argument passed
 * Return: 1
 */

int printchar(va_list args)
{
char c;
c = va_arg(args, int);
put_char(c);
return (1);
}
