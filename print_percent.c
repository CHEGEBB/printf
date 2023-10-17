#include "main.h"

/**
 * print_percentage - Prints a percentage sign
 * @args: List of arguments
 * @output_buffer: Buffer array to handle printing
 * @active_flags: Flags that affect the printing
 * @field_width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 *
 * Return: Number of characters printed
 */
int print_percentage(va_list args, char output_buffer[], int active_flags, int field_width, int precision, int size_specifier)
{
    UNUSED(args);
    UNUSED(output_buffer);
    UNUSED(active_flags);
    UNUSED(field_width);
    UNUSED(precision);
    UNUSED(size_specifier);

    return (write(1, "%%", 1));
}
