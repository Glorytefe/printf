#include "main.h"
/**
 * _putchar - custom putchar function
 * @C: char to printed
 *
 * Return: 1 (success), -1 (failure)
 */
 int _putcha(char c)
{
	int retval;

	retval = write(1, &c, 1);

	return (retval);
}

/**
 * char_printer - prints chars
 * @args: list where char is located
 *
 * Return: 1 (successful print)
 */
int char_printer(va_list args)
{
	char c = va_arg(list, int);

	return(_putchar(c));
}




/**
 * string_printer - prints strings
 * @args: list where string to be printed is located
 *
 * Return: number of chars printed in string
 */
int string_printer(va_list args)
{
	char *s = va_arg(args, char *);
	int i;
	
	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(c);
		}
		return (i);
	}
	else
	{	
		return (-1);
	}


}
