#include "main.h"

/**
 * print_octal_number - Prints an unsigned number in octal notation
 * @args: List of arguments
 * @output_buffer: Buffer array to handle printing
 * @active_flags: Flags that affect the printing
 * @field_width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 *
 * Return: Number of characters printed
 */
int print_octal_number(va_list args, char output_buffer[], int active_flags, int field_width, int precision, int size_specifier)
{
    int i = BUFF_SIZE - 2;
    unsigned long int num = va_arg(args, unsigned long int);
    unsigned long int initial_num = num;

    UNUSED(field_width);

    num = convert_size_unsigned(num, size_specifier);

    if (num == 0)
        output_buffer[i--] = '0';

    output_buffer[BUFF_SIZE - 1] = '\0';

    while (num > 0)
    {
        output_buffer[i--] = (num % 8) + '0';
        num /= 8;
    }

    if (active_flags & F_HASH && initial_num != 0)
        output_buffer[i--] = '0';

    i++;

    return (write_unsigned(0, i, output_buffer, active_flags, field_width, precision, size_specifier));
}
