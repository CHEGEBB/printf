#include "main.h"

/**
 * printstring - prints a string
 * @args: The string to print, argument passed
 * Return: the length of the string
 */
int printstring(va_list args)
{
char *s;
int i = 0, count = 0;

s = va_arg(args, char *);

if (s == NULL)
{
s = "(null)";
count = strlength(s);
while (i < count)
{
put_char(s[i]);
i++;
}
return (count);
}
else
{
count = strlength(s);
while (i < count)
{
put_char(s[i]);
i++;
}
return (count);
}
}
