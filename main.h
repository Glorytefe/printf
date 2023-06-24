#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct printer - Struct printer
 * @format: format to print
 * @f: function to print
 */

typedef struct printer
{
	char *format;
	int (*f)(va_list);
} printer;

int _putchar(char c);
int print_str(va_list ptr);
int (*print_selector(const char *format))(va_list);
int _printf(const char *format, ...);

#endif
