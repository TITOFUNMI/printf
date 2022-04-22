#include "main.h"

/**
 * print_string - prints a string to stdout
 * @str: string to be printed
 * Return: no. of characters printed on success, or 0 on failure
 */

int print_string(char *str)
{
	int i = 0;

	if (str == (char *)0)
		return (print_string("(null)"));
	while (str && str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}


