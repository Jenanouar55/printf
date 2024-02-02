#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>


int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list arg, int *dest);
void print_string(va_list arg, int *dest);
void print_pe(va_list arg, int *dest);
void print_int(va_list arg, int *dest);

/**
 * struct specifier - structure for specifiers
 * @type: type of specifier
 * @f: function pointer to the specifier
 */

typedef struct specifier
{
	char type;
	void (*handler)(va_list arg, int *);
} spec;

#endif
