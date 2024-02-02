#include "main.h"

/**
 * print_perc - prints a percent character
 * @arg: unused argument (va_list)
 * @i: pointer to count variable
 */
void print_perc(va_list arg, int *i)
{
	(void)arg;
	_putchar(37);
	(*i)++;
}
