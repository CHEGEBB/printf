#include "main.h"

/**
 * print_reversed_string - Prints a reversed string.
 * @args: List of arguments
 * @output_buffer: Buffer array to handle printing
 * @active_flags: Flags that affect the printing
 * @field_width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 *
 * Return: Number of characters printed
 */
int print_reversed_string(va_list args, char output_buffer[], int active_flags, int field_width, int precision, int size_specifier)
{
    char *str;
    int i, count = 0;

    UNUSED(output_buffer);
    UNUSED(active_flags);
    UNUSED(field_width);
    UNUSED(size_specifier);

    str = va_arg(args, char *);

    if (str == NULL)
    {
        UNUSED(precision);
        str = ")Null(";
    }

    for (i = 0; str[i]; i++)
        ;

    for (i = i - 1; i >= 0; i--)
    {
        char character = str[i];
        write(1, &character, 1);
        count++;
    }

    return count;
}
