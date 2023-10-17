#include "main.h"

/**
 * print_unsigned_number - Prints an unsigned number to the output
 * @args: List of arguments
 * @output_buffer: Buffer array to handle printing
 * @active_flags: Flags that affect the printing
 * @field_width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 *
 * Return: Number of characters printed
 */
int print_unsigned_number(va_list args, char output_buffer[], int active_flags, int field_width, int precision, int size_specifier)
{
    int i = BUFF_SIZE - 2;
    unsigned long int number = va_arg(args, unsigned long int);

    number = convert_size_unsigned(number, size_specifier);

    if (number == 0)
        output_buffer[i--] = '0';

    output_buffer[BUFF_SIZE - 1] = '\0';

    while (number > 0)
    {
        output_buffer[i--] = (number % 10) + '0';
        number /= 10;
    }

    i++;

    return write_unsigned(0, i, output_buffer, active_flags, field_width, precision, size_specifier);
}
