#include "main.h"

/**
 * print_string - prints a string to stdout
 * @str: string to be printed
 * Return: no. of characters printed on success, or 0 on failure
 */

int print_string(char *str)
{
	int char_printed = 0;

	if (str == (char *)0)
		return (print_string("(null)"));
	while (str && str[char_printed])
	{
		_putchar(str[char_printed]);
		char_printed++;
	}
	return (char_printed);
}
