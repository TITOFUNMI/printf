#include "main.h"

/**
 * print_unknown_spec - prints unknown specifiers
 *
 * @c: character
 * Return: chars_printed
 */
int print_unknown_spec(char c)
{
	int char_printed = 0;

	if (c == '%')
	{
		char_printed += _putchar('%');
	}
	else
	{
		char_printed += _putchar('%');
		char_printed += _putchar(c);
	}
	return (char_printed);
}
