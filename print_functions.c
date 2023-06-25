#include "main.h"
/**
 * _putchar - custom putchar function
 * @C: char to printed
 *
 * Return: 1 (success), -1 (failure)
 */
 int _putchar(char c)
{

	return (write(1, &c, 1));
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

/**
 * int_recurse - prints multiple digit numbers in the right order
 * @num: number to print
 *
 * Return: number of digits in number
 */
int int_recurse(int num)
{
	int n;

	if (num == 0)
	{
		return(0);
	}
	else
	{
		n = num / 10;
		count = int_recurse(n);
		count += _putchar((num % 10) + '0');
		return (count);
		
	}
}

n

/**
 * int_printer - prints integers
 * @args: list where int to be printed is located
 *
 * Return: number of digits printed and sign if any
 */
int int_printer(va_list args)
{
	int num, counter = 0;
	

	num = va_arg(digits, int);

	if (num < 0)
	{
		counter += _putchar('-');
	}
	
	if (num % 10 == num)
	{
		counter += _putchar(num + '0');
	}
	else
	{
		counter += int_recurse(num);
	}

	return (counter);
}
