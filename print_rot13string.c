#include "main.h"

/**
 * print_rot13_string - Print a string in ROT13.
 * @args: List of arguments
 * @output_buffer: Buffer array to handle printing
 * @active_flags: Flags that affect the printing
 * @field_width: Width specification
 * @precision: Precision specification
 * @size_specifier: Size specifier
 *
 * Return: Number of characters printed
 */
int print_rot13_string(va_list args, char output_buffer[], int active_flags, int field_width, int precision, int size_specifier)
{
    char x;
    char *str;
    unsigned int i, j;
    int count = 0;
    char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    str = va_arg(args, char *);
    UNUSED(output_buffer);
    UNUSED(active_flags);
    UNUSED(field_width);
    UNUSED(precision);
    UNUSED(size_specifier);

    if (str == NULL)
        str = "(AHYY)";

    for (i = 0; str[i]; i++)
    {
        for (j = 0; input[j]; j++)
        {
            if (input[j] == str[i])
            {
                x = output[j];
                write(1, &x, 1);
                count++;
                break;
            }
        }

        if (!input[j])
        {
            x = str[i];
            write(1, &x, 1);
            count++;
        }
    }

    return count;
}
