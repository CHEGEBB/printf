#include "main.h"

/**
 * print_output_string - Prints a string to the output
 * @args: List of arguments
 * @output_buffer: Buffer array to handle printing
 * @active_flags: Flags that affect the printing
 * @field_width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 *
 * Return: Number of characters printed
 */
int print_output_string(va_list args, char output_buffer[], int active_flags, int field_width, int precision, int size_specifier)
{
    int length = 0, i;
    char *str = va_arg(args, char *);

    UNUSED(output_buffer);
    UNUSED(active_flags);
    UNUSED(field_width);
    UNUSED(size_specifier);

    if (str == NULL)
    {
        str = "(null)";
        if (precision >= 6)
            str = "      ";
    }

    while (str[length] != '\0')
        length++;

    if (precision >= 0 && precision < length)
        length = precision;

    if (field_width > length)
    {
        if (active_flags & F_MINUS)
        {
            write(1, &str[0], length);
            for (i = field_width - length; i > 0; i--)
                write(1, " ", 1);
            return field_width;
        }
        else
        {
            for (i = field_width - length; i > 0; i--)
                write(1, " ", 1);
            write(1, &str[0], length);
            return field_width;
        }
    }

    return write(1, str, length);
}
