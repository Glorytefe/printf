#include "main.h"
/**
 * main - tester code for printf function
 *
 * Return: 0
 */
int main(void)
{
	int len, len2;
	char c = 'A';
	char *s = "for printf";
	int num = -9;
	

	/*plain string*/
	len = _printf("This is a test\n");
	len2 = printf("This is a test\n");
	printf("len 1: %d\nlen 2: %d\n", len, len2);

	/*string with escape character*/
	len = _printf("This is \"a test\"\n");
	len2 = printf("This is \"a test\"\n");
	printf("len 1: %d\nlen 2: %d\n", len, len2);
	
	/*string with %*/
	len = _printf("This is a %% test\n");
	len2 = printf("This is a %% test\n");
	printf("len 1: %d\nlen 2: %d\n", len, len2);
	len = _printf("This is \"a %% test\"\n");
	len2 = printf("This is \"a %% test\"\n");
	printf("len 1: %d\nlen 2: %d\n", len, len2);
	
	/*string with c specifier*/
	len = _printf("This is a test %c\n", c);
	len2 = printf("This is a test %c\n", c);
	printf("len 1: %d\nlen 2: %d\n", len, len2);

	/*string with s specifier*/
	len = _printf("This is a test %s\n", s);
	len2 = printf("This is a test %s\n", s);
	printf("len 1: %d\nlen 2: %d\n", len, len2);
	
	/*string with int specifiers*/
	len = _printf("This is test %d\n", num);
	len2 = printf("This is test %d\n", num);
	printf("len 1: %d\nlen 2: %d\n", len, len2);
	len = _printf("This is intmin %i\n", INT_MIN);
	len2 = printf("This is intmin %d\n", INT_MIN);
	_printf("len 1: %d\nlen 2: %i\n", len, len2);
	
	/*mismatched or unknown specifier*/
	/*len = _printf("This is a test %s\n", num);
	len2 = printf("This is a test %s\n", s);
	printf("len 1: %d\nlen 2: %d\n", len, len2);
	*/len = _printf("This is a test %r\n", s);
	len2 = printf("This is a test %s\n", s);
	printf("len 1: %d\nlen 2: %d\n", len, len2);

	/*all specifiers*/
	len = _printf("This is %c%d test %i%s\n", c, num, num, s);
	len2 = printf("This is a test %s\n", s);
	printf("len 1: %d\nlen 2: %d\n", len, len2);

		return(0);
}
