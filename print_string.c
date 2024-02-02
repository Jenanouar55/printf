#include "main.h"

/**
 * print_string - prints a string
 * @arg: argument list
 * @i: pointer to count variable
 */
void print_string(va_list arg, int *i)
{
	int x = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		(*i)++;
		x++;
	}
}
