#include "main.h"
/**
 * print_char - prints a character
 * @arg: argument list
 * @i: pointer to count variable
 */
void print_char(va_list arg, int *i)
{
	char x = va_arg(arg, int);

	_putchar(x);
	(*i)++;
}
