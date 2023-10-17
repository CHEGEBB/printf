#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for. Ex: %s, %c, %i, etc.
 * Return: number of characters printed.
 */
int _printf(const char * const format, ...)
{
format_t p[] = {
{"%s", printstring}, {"%c", printchar},
{"%%", print37},
{"%i", printinteger}, {"%d", printdecimal}, {"%r", reversestr},
{"%R", rot13}, {"%b", printbinary}, {"%u", unsignedint},
{"%o", printoctal}, {"%x", Hex}, {"%X",hexadec},
{"%S", printallstring}, {"%p", pointerprinters}
};

va_list args;
int idx = 0, k, count = 0;

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

Here:
while (format[idx] != '\0')
{
k = 13;
while (k >= 0)
{
if (p[k].identifier[0] == format[idx] && p[k].identifier[1] == format[idx + 1])
{
count += p[k].func(args);
idx = idx + 2;
goto Here;
}
k--;
}
put_char(format[idx]);
count++;
idx++;
}
va_end(args);
return (count);
}
