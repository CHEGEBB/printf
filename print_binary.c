#include "main.h"

/**
 * print_binary - Prints a binary representation of an unsigned number
 * @args: List of arguments
 * @buffer: Buffer array to handle printing
 * @flags: Flags for formatting
 * @width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 *
 * Return: Number of characters printed
 */
int print_binary(va_list args, char buffer[], int flags, int width, int precision, int size_specifier)
{
	unsigned int number, divisor, i, sum;
	unsigned int binary_digits[32];
	int char_count;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size_specifier);

	number = va_arg(args, unsigned int);
	divisor = 2147483648; /* 2^31 */

	binary_digits[0] = number / divisor;

	for (i = 1; i < 32; i++)
	{
		divisor /= 2;
		binary_digits[i] = (number / divisor) % 2;
	}

	for (i = 0, sum = 0, char_count = 0; i < 32; i++)
	{
		sum += binary_digits[i];

		if (sum || i == 31)
		{
			char binary_char = '0' + binary_digits[i];
			write(1, &binary_char, 1);
			char_count++;
		}
	}

	return char_count;
}
