#include "main.h"

/**
 * printinteger - prints an integer
 * @args: The integer to print, argument passed
 * Return: number of digits printed
 */

int printinteger(va_list args)
{
int m = va_arg(args, int);
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
number -= d *exp;
exp /= 10;
i++;
}
}
put_char(lass + '0');
return (i);
}

/**
 * printdecimal - prints decimal
 * @args: The decimal to print, argument passed
 * Return: number of digits printed
 */

int printdecimal(va_list args)
{
int m = va_arg(args, int);
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
number -= d *exp;
exp /= 10;
i++;
}
}
put_char(lass + '0');
return (i);
}
