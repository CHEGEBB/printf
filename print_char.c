
#include "main.h"

/**
 * print_char - Prints a character
 * @args: List of arguments
 * @buf: Buffer array to handle print
 * @f:  Calculates active flags
 * @w: Width
 * @p: Precision specification
 * @s: Size specifier
 * Return: Number of characters printed
 */
int print_char(va_list args, char buf[], int f, int w, int p, int s)
{
	char c = va_arg(args, int);

	return (handle_write_char(c, buf, f, w, p, s));
}

