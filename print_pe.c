#include "main.h"

/**
 * print_pe - prints a % character
 * @arg: unused argument (va_list)
 * @dest: pointer to sum up variable
 */
void print_pe(va_list arg, int *dest)
{
	(void)arg;
	_putchar(37);
	(*dest)++;
}
