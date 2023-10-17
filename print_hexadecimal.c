#include "main.h"

/**
 * print_unsigned_hex - Prints an unsigned number in hexadecimal notation
 * @args: List of arguments
 * @output_buffer: Buffer array to handle printing
 * @active_flags: Flags that affect the printing
 * @field_width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 * Return: Number of characters printed
 */
int print_unsigned_hex(va_list args, char output_buffer[], int active_flags, int field_width, int precision, int size_specifier)
{
    return (print_hexa(args, "0123456789abcdef", output_buffer, active_flags, 'x', field_width, precision, size_specifier));
}
