#include "main.h"
/**
 * valid_specifier - Checks if a character is a valid specifier.
 * @c: The character to check.
 * Return: 1 if valid specifier, 0 otherwise.
 */
int valid_specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'd' || c == 'i');
}
