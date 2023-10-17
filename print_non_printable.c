#include "main.h"

/**
 * print_non_printable_chars - Prints ASCII codes in hexadecimal of non-printable characters
 * @args: List of arguments
 * @output_buffer: Buffer array to handle printing
 * @active_flags: Flags that affect the printing
 * @field_width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 * Return: Number of characters printed
 */
int print_non_printable_chars(va_list args, char output_buffer[], int active_flags, int field_width, int precision, int size_specifier)
{
    int i = 0, offset = 0;
    char *str = va_arg(args, char *);

    UNUSED(active_flags);
    UNUSED(field_width);
    UNUSED(precision);
    UNUSED(size_specifier);

    if (str == NULL)
        return (write(1, "(null)", 6));

    while (str[i] != '\0')
    {
        if (is_printable(str[i]))
            output_buffer[i + offset] = str[i];
        else
            offset += append_hexadecimal_code(str[i], output_buffer, i + offset);

        i++;
    }

    output_buffer[i + offset] = '\0';

    return (write(1, output_buffer, i + offset));
}
