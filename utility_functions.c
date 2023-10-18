#include "main.h"

/**
 * custom_is_printable - Checks if a character is printable
 * @c: The character to be checked.
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int custom_is_printable(char c)
{
    if (c >= 32 && c < 127)
        return (1);

    return (0);
}

/**
 * custom_append_hexa_code - Appends ASCII in hexadecimal code to a buffer
 * @buffer: Array of characters.
 * @i: Index at which to start appending.
 * @ascii_code: ASCII code.
 *
 * Return: Always 3
 */
int custom_append_hexa_code(char ascii_code, char buffer[], int i)
{
    char hex_map[] = "0123456789ABCDEF";
    /* The hexadecimal format code is always 2 digits long */
    if (ascii_code < 0)
        ascii_code *= -1;

    buffer[i++] = '\\';
    buffer[i++] = 'x';

    buffer[i++] = hex_map[ascii_code / 16];
    buffer[i] = hex_map[ascii_code % 16];

    return (3);
}

/**
 * custom_is_digit - Checks if a character is a digit
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int custom_is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);

    return (0);
}

/**
 * custom_convert_size_number - Casts a number to the specified size
 * @num: Number to be cast.
 * @size: Number indicating the type to cast.
 *
 * Return: Casted value of num
 */
long int custom_convert_size_number(long int num, int size)
{
    if (size == S_LONG)
        return (num);
    else if (size == S_SHORT)
        return ((short)num);

    return ((int)num);
}

/**
 * custom_convert_size_unsgnd - Casts an unsigned number to the specified size
 * @num: Number to be cast.
 * @size: Number indicating the type to cast.
 *
 * Return: Casted value of num
 */
unsigned long int custom_convert_size_unsgnd(unsigned long int num, int size)
{
    if (size == S_LONG)
        return (num);
    else if (size == S_SHORT)
        return ((unsigned short)num);

    return ((unsigned int)num);
}

