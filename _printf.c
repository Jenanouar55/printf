#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, dest = 0, y;
	va_list arg;

	spec specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_pe},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};
	va_start(arg, format);
	if (format == NULL)
		return (-1);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (y = 0; specifiers[y].type != '\0'; y++)
			{
				if (format[i] == specifiers[y].type)
				{
					specifiers[y].handler(arg, &dest);
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			dest++;
		}
	}

	va_end(arg);
	return (dest);
}
