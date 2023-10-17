#include "main.h"

/**
 * printoctal - prints a number in octal notation
 * @args: The number to print, argument passed
 * Return: number of digits printed
 */

int printoctal(va_list args)
{
unsigned int number = va_arg(args, unsigned int);
int count = 0;
int i;
unsigned int m = number;
int *arr;

while (number / 8 != 0)
{
number /= 8;
count++;
}
count++;
arr = malloc(count * sizeof(int));

for (i = 0; i < count; i++)
{
arr[i] = m % 8;
m /= 8;
}
for (i = count - 1; i >= 0; i--)
{
put_char(arr[i] + '0');
}
free(arr);
return (count);
}
