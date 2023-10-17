#include "main.h"

/**
 * print_memory_address - Prints the value of a memory address
 * @args: List of arguments
 * @output_buffer: Buffer array to handle printing
 * @active_flags: Flags that affect the printing
 * @field_width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 * Return: Number of characters printed
 */
int print_memory_address(va_list args, char output_buffer[], int active_flags, int field_width, int precision, int size_specifier)
{
    char extra_char = 0, padding_char = ' ';
    int index = BUFF_SIZE - 2, length = 2, padding_start = 1; /* length=2, for '0x' */
    unsigned long address;
    char hex_map[] = "0123456789abcdef";
    void *pointer = va_arg(args, void *);

    UNUSED(field_width);
    UNUSED(size_specifier);

    if (pointer == NULL)
        return (write(1, "(nil)", 5);

    output_buffer[BUFF_SIZE - 1] = '\0';
    UNUSED(precision);

    address = (unsigned long)pointer;

    while (address > 0)
    {
        output_buffer[index--] = hex_map[address % 16];
        address /= 16;
        length++;
    }

    if ((active_flags & F_ZERO) && !(active_flags & F_MINUS))
        padding_char = '0';

    if (active_flags & F_PLUS)
        extra_char = '+', length++;
    else if (active_flags & F_SPACE)
        extra_char = ' ', length++;

    index++;

    return (write_pointer(output_buffer, index, length, field_width, active_flags, padding_char, extra_char, padding_start));
}
