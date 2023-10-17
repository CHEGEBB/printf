#include "main.h"

/**
 * hexadec - prints a hexadecimal number
 * @args: The number to be printed, argument passed
 * Return: number of digits printed
 */

int hexadec(va_list args)
{
unsigned int number = va_arg(args, unsigned int);
int count = 0;
int i;
unsigned int m = number;
int *arr;

while (number / 16 != 0)
{
number /= 16;
count++;
}
count++;
arr = malloc(count * sizeof(int));
for (i = 0; i < count; i++)
{
arr[i] = m % 16;
m /= 16;
}
for (i = count - 1; i >= 0; i--)
{
if (arr[i] > 9)
{
arr[i] = arr[i] + 7;
}
put_char(arr[i] + '0');
}
free(arr);
return (count);
}
