#include "main.h"
/**
 * print_selector - selects the right printer for a matching specifier
 * @s: specifier to match
 *
 * Return: pointer to  appropriate printer(match), NULL (no match)
 */
int (*print_selector(char s))(va_list)
{
	unsigned int i = 0;
	printer p_list[] = {
		{"c", char_printer},
		{"s", string_printer},
		{"d", int_printer},
		{"i", int_printer},
	};

	unsigned int list_len = sizeof(p_list) / sizeof(p_list[0]);

	while (i < list_len && (p_list[i].format[0] != s))
	{
		i++;
	}

	if (i > list_len)
		return (p_list[0].f);

	return (p_list[i].f);

}
