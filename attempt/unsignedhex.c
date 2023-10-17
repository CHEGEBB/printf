#include "main.h"

/**
 * unsignedhex - prints an unsigned int in hexadecimal form
 * @number: The number to be printed, argument passed
 * Return: number of digits printed
 */

int unsignedhex(unsigned int number)
{
int count = 0;
int i;
int *arr;
unsigned int m = number;

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
