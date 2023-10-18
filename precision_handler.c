#include "main.h"

/**
 * custom_get_precision - Calculate precision for printing
 *
 * @format: The format string to print arguments
 * @position: Pointer to track the current position in the format string
 * @args: List of arguments
 *
 * Return: Precision value
 */
int custom_get_precision(const char *format, int *position, va_list args)
{
    int currentPos = *position + 1;
    int precisionValue = -1;

    if (format[currentPos] != '.')
        return (precisionValue);

    precisionValue = 0;

    for (currentPos += 1; format[currentPos] != '\0'; currentPos++)
    {
        if (is_digit(format[currentPos]))
        {
            precisionValue *= 10;
            precisionValue += format[currentPos] - '0';
        }
        else if (format[currentPos] == '*')
        {
            currentPos++;
            precisionValue = va_arg(args, int);
            break;
        }
        else
            break;
    }

    *position = currentPos - 1;

    return (precisionValue);
}
