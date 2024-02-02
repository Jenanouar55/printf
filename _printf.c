#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int x = 0, dest = 0;
	int y;
	va_list arg;
	spec specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_perc},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			x++;
			y = 0;
			while (specifiers[y].type != '\0')
			{
				if (format[x] == specifiers[y].type)
				{
					specifiers[y].handler(arg, &dest);
					break;
				}
				y++;
			}
		}
		else
		{
			_putchar(format[x]);
			dest++;
		}
		x++;
	}
	va_end(arg);
	return (dest);
}
