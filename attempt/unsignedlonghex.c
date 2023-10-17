#include "main.h"

/**
 * unsignedlonghex - prints an unsigned long int in hexadecimal form
 * @number: The number to be printed, argument passed
 * Return: number of digits printed
 */

int unsignedlonghex(unsigned long int number)
{
long int count = 0;
long int i;
long int *arr;
unsigned long int m = number;

while (number / 16 != 0)
{
number /= 16;
count++;
}
count++;
arr = malloc(count * sizeof(long int));

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
