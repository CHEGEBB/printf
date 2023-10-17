#include "main.h"

/**
 * printbinary - prints a binary
 * @args: The character to print, argument passed
 * Return: 1
 */

int printbinary(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0;
int flag = 0;
int i, c = 1, d;
unsigned int n;

for (i = 0; i < 32; i++)
{
n = ((c << (31 - i)) & num);
if (n >> (31 - i))
{
flag = 1;
}
if (flag)
{
d = n >> (31 - i);
put_char(d + 48);
count++;
}
}
if (count == 0)
{
count++;
put_char('0');
}
return (count);
}
