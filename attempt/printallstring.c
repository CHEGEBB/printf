#include "main.h"

/**
 * printallstring - handles special characters in a string
 * and prints an  exclusuive string
 * @args: type va_list
 * Return: number of characters printed
 */

int printallstring(va_list args)
{

int i = 0, j = 0, count = 0;
char *s;
s = va_arg(args, char *);

if (s == NULL)
{
s = "(null)";
}
while (s[i] != '\0')
{
if (s[i] < 32 || s[i] >= 127)
{
put_char('\\');
put_char('x');
count += 2;
j = s[i];
if (j < 16)
{
put_char('0');
count++;
}
count += unsignedhex(j);
}
else
{
put_char(s[i]);
count++;
}
i++;
}
return (count);
}
