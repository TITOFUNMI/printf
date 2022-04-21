#include "main.h"

/**
 */

int print_string(char *str)
{
	int i;

	if (str == (char *)0)
		return (print_string("(null)"));
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);

		}
	}
	return (i);
}


