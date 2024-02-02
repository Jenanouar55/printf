#include "main.h"
/**
 * print_char - prints a character
 * @arg: argument list
 * @dest: pointer to sum up variable
 */
void print_char(va_list arg, int *dest)
{
	int c = va_arg(arg, int);

	_putchar(c);
	(*dest)++;
}
