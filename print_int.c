#include "main.h"

/**
 * print_integer - Print an integer
 * @args: List of arguments
 * @output_buffer: Buffer array to handle printing
 * @active_flags: Flags that affect the printing
 * @field_width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 * Return: Number of characters printed
 */
int print_integer(va_list args, char output_buffer[], int active_flags, int field_width, int precision, int size_specifier)
{
    int i = BUFF_SIZE - 2;
    int is_negative = 0;
    long int original_number = va_arg(args, long int);
    unsigned long int num;

    original_number = convert_size_number(original_number, size_specifier);

    if (original_number == 0)
        output_buffer[i--] = '0';

    output_buffer[BUFF_SIZE - 1] = '\0';
    num = (unsigned long int)original_number;

    if (original_number < 0)
    {
        num = (unsigned long int)((-1) * original_number);
        is_negative = 1;
    }

    while (num > 0)
    {
        output_buffer[i--] = (num % 10) + '0';
        num /= 10;
    }

    i++;

    return (write_number(is_negative, i, output_buffer, active_flags, field_width, precision, size_specifier));
}
