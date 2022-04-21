#include "main.h"
#include <stdarg.h>

/**
 * _printf - Function that prints formatted output.
 *
 * @format: a string composed of zero or more characters to print or use as
 * directives that handle subsequent arguments and special characters.
 *
 * Description: This function can take a variable number and type of arguments
 * that should be printed to standard output.
 *
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, char_printed = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			char_printed += _putchar(format[i]);
		}
		else if (format[i + 1])
		{
			i++;
			if (format[i] == 'c' || format[i] == 's')
			{
				if (format[i] == 'c')
					char_printed += _putchar(va_arg(args, int));
				else
					char_printed += print_string(va_arg(args, char *));
			}
			else if (format[i] == '%')
					char_printed += print_percentage(print_percentage(va_arg(args, int)));
			else if (format[i] == 'd' || format[i] == 'i')
				char_printed += print_num(va_arg(args, int));
			else if (format[i] == 'b')
				char_printed += print_binary((unsigned int)va_arg(args, int));
		}
		i++;
	}
	va_end(args);

	return (char_printed);

}
