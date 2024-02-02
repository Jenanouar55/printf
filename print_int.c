#include "main.h"

/**
 * print_int - prints an integer
 * @arg: argument list
 * @i: pointer to i variable
 * Return: void
 */
void print_int(va_list arg, int *i)
{
	int x = va_arg(arg, int);
	int kid = 1, digit;

	if (x < 0)
	{
		_putchar('-');
		(*i)++;
	}
	while (x / kid > 9 || x / kid < -9)
	{
		kid *= 10;
		(*i)++;
	}
	while (kid != 0)
	{
		digit = (x / kid) % 10;
		if (digit < 0)
			digit *= -1;
		_putchar(digit + '0');
		(*i)++;
		kid /= 10;
	}
}
