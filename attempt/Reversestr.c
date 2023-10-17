#include "main.h"

/**
 * reversestr - reverses a string
 * @args: string to reverse
 * Return: reversed string
 */

int reversestr(va_list args)
{
int i, j = 0;
char *s = va_arg(args, char*);

if (s == NULL)
{
s = "(null)";
}
while (s[j] != '\0')
{
j++;
}
for (i = j - 1; i >= 0; i--)
{
put_char(s[i]);
}
return (j);
}
