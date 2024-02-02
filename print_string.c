#include "main.h"

/**
 * print_string - prints a string
 * @arg: argument list
 * @dest: pointer to sum up variable
 */
void print_string(va_list arg, int *dest)
{
	char *str = va_arg(arg, char*);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		(*dest)++;
	}
}
