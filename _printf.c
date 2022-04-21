#include "main.h"
#include <stdarg.h>

/**
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
		}
		i++;
	}
	va_end(args);

	return (char_printed);
	
}
