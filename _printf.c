#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format to print
 * @...: arg list
 * Return: printed character count
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int (*printer)(va_list);
	int char_count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				char_count++;
				_putchar('%');
			}
			else if (format[i + 1] != '\0')
			{
				printer = print_selector(format[i + 1]);
				if (printer == NULL)
					break;
				char_count += printer(args);
			}
			else
				break;
		}
		else if (i == 0 || format[i - 1] != '%')
		{
			char_count++;
			_putchar(format[i]);
		}
	}
	return (char_count);
}
