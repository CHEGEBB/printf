#include "main.h"

/**
 * strlength - returns the length of a string
 * @s: type char *
 * Return: length of string
 */
int strlength(char *s)
{
int i = 0;

while (s[i] != 0)
i++;
return (i);
}

/**
 * strlengthconst - strlength function but applied for constant char pointer s
 * @s: type const char *
 * Return: length of string
 */
int strlengthconst(const char *s)
{
int i = 0;

while (s[i] != 0)
{
i++;
}
return (i);
}
