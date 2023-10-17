## myprintf function

The `_printf` function is a custom printf function created by Walter and Edwin. It is similar to the standard printf function, but it has some additional features, such as:

* Support for custom format specifiers.
* Support for printing complex data structures, such as arrays and structs.
* Improved performance.

### Syntax

The `_printf` function takes the same arguments as the standard printf function:

* A format string, which specifies how the output should be formatted.
* A variable number of arguments, which are the values to be printed.

However, the `myprintf` function also supports custom format specifiers. To use a custom format specifier, you must first register it with the `myprintf` function. You can do this using the following function:

```c
int _printf_register_format_specifier(const char *name, _printf_format_specifier_handler_t handler);


The `name` parameter is the name of the format specifier. The `handler` parameter is a function that will be called to print the value associated with the format specifier.

Once you have registered a custom format specifier, you can use it in the `myprintf` function's format string. To do this, simply prefix the format specifier with a `%`. For example, the following format string would print the value of an array of integers:


"The array contains the following elements:\n%A"


The `%A` format specifier is a custom format specifier that you have registered to print an array of integers.

### Example

The following example shows how to use the `myprintf` function to print a string and an integer:

c
#include <stdio.h>

int main() {
  _printf("Hello, world! %d\n", 10);
  return 0;
}

