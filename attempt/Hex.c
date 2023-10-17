#include "main.h"

/**
 * Hex - prints a hexadecimal
 * @args: The hexadecimal to print, argument passed
 * Return: number of digits printed
 */

int Hex(va_list args)
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
arr[i] = arr[i] + 39;
}
put_char(arr[i] + '0');
}
free(arr);
return (count);
}
