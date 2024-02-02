#include <stdarg.h>
#include "main.h"
/**
 * _printf - Produces output according to a format.
 * @format: Character string with optional format specifiers.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int x = 0, dest = 0;
	int y;
	va_list arg;
	spec specifiers[] = {{'c', print_char}, {'s', print_string},
	{'%', print_perc}, {'d', print_int}, {'i', print_int}, {'\0', NULL}};

	va_start(arg, format);
	if (format == NULL)
	{
		return (-1);
	}
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			for (x++; format[x] != '\0' && !valid_specifier(format[x]); x++)
			{
				_putchar(format[x]);
				dest++;
			}

			for (x++, y = 0; specifiers[y].type != '\0'; y++)
			{
				if (format[x] == specifiers[y].type)
				{
					specifiers[y].handler(arg, &dest);
				}
				else if (specifiers[y].type == '\0')
				{
					_putchar('%');
					dest++;
				}
			}
		}
		else
		{
			_putchar(format[x]);
			dest++;
		}
	}
	va_end(arg);
	return (dest);
}

