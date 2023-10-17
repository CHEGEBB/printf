#include "main.h"

/**
 * print_hexadecimal - Prints a hexadecimal number in lower or upper case
 * @args: List of arguments
 * @hex_map: Array of values to map the number to
 * @output_buffer: Buffer array to handle printing
 * @active_flags: Flags that affect the printing
 * @flag_char: Character for flag
 * @field_width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 *
 * Return: Number of characters printed
 */
int print_hexadecimal(va_list args, char hex_map[], char output_buffer[], int active_flags, char flag_char, int field_width, int precision, int size_specifier)
{
	int i = BUFF_SIZE - 2;
	unsigned long int number = va_arg(args, unsigned long int);
	unsigned long int initial_number = number;

	UNUSED(field_width);

	number = convert_size_unsigned(number, size_specifier);

	if (number == 0)
		output_buffer[i--] = '0';

	output_buffer[BUFF_SIZE - 1] = '\0';

	while (number > 0)
	{
		output_buffer[i--] = hex_map[number % 16];
		number /= 16;
	}

	if (active_flags & F_HASH && initial_number != 0)
	{
		output_buffer[i--] = flag_char;
		output_buffer[i--] = '0';
	}

	i++;

	return (write_unsigned(0, i, output_buffer, active_flags, field_width, precision, size_specifier));
}
