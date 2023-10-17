#include "main.h"

/**
 * pointerprinters - prints a string
 * @args: The string to print, argument passed
 * Return: the length of the string
 */


int pointerprinters(va_list args)
{
int i;
char *s = "(nil)";
int d;
long int c;
void *ptr;
ptr = va_arg(args, void *);

if (ptr == NULL)
{
for (i = 0; s[i] != '\0'; i++)
{
put_char(s[i]);
}
return (i);
}
c = (unsigned long int)ptr;
put_char('0');
put_char('x');
d = unsignedlonghex(c);
return (d + 2);
}
