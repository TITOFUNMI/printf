#include "main.h"

/**
 * print_string - prints a string to stdout
 * @str: string to be printed
 * Return: no. of characters printed on success, or 0 on failure
 */

int print_string(char *str)
{
	int i;

	if (str == (char *)0)
		return (print_string("(null)"));

	for (i = 0; str && str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}


