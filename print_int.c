#include "main.h"

/**
 * print_integer - Prints an integer.
 * @arg: Argument list.
 * @dest: Pointer to the count variable.
 * Return: void
 */

void print_int(va_list arg, int *dest)
{
	int x = va_arg(arg, int);
	int br = 1, y, pes;

	if (x < 0)
	{
		_putchar('-');
		*dest += 1;
	}
	for (y = 0; x / br > 9 || x / br < -9; y++)
		br *= 10;
	for (; br != 0; br /= 10)
	{
		pes = (x / br) % 10;
		if (pes < 0)
			pes *= -1;
		_putchar(pes + '0');
		*dest += 1;
	}
}
