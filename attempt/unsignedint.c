#include "main.h"

/**
 * unsignedint - prints an unsigned integer
 * @args: The character to print, argument passed
 * Return: number of digits printed
 */

int unsignedint(va_list args)
{
unsigned int m = va_arg(args, unsigned int);
int i = 1;
int number, lass = m % 10, d, exp = 1;

m /= 10;
number = m;

if (lass < 0)
{
put_char('-');
number = -number;
m = -m;
lass = -lass;
i++;
}
if (number > 0)
{
while (number / 10 != 0)
{
exp *= 10;
number /= 10;
}
number = m;
while (exp > 0)
{
d = number / exp;
put_char(d + '0');
number -= (d * exp);
exp /= 10;
i++;
}
}
put_char(lass + '0');
return (i);
}
