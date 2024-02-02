#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>


int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list arg, int *i);
void print_string(va_list arg, int *i);
void print_perc(va_list arg, int *i);
void print_int(va_list arg, int *i);
int valid_specifier(char c);

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
