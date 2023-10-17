#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @args: argument passed
 * Return: length of string
 */

int rot13(va_list args)
{
int i = 0, j;
char *s = va_arg(args, char *);
char norm[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char rot[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
int count = 0;
int f = 0;

if (s == NULL)
{
s = "(null)";
}
for (i = 0; s[i] ; i++)
{
f = 0;
for (j = 0; norm[j] && !f; j++)
{
if (s[i] == norm[j])
{
put_char(rot[j]);
count++;
f = 1;
}
}
if (!f)
{
put_char(s[i]);
count++;
}
}
return (count);
}
