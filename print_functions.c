/**
 * _putchar - custom putchar function
 * @va_list: list where char to print is located
 *
 * Return: 1 (success), -1 (failure)
 */
 int _putchar(va_list)
{
	char c = va_arg(list, int);
	int retval;

	write(1, &c, 1);
}



/**
 * string_printer - prints strings
 * @va_list:list where string to be printed is located
 *
 * Return: number of chars printed in string
 */
int string_printer(va_list)
{
	char *s = va_arg(args, char *);
	int i, print_counter = 0;
	
	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(c);
			print_counter++;
		}
		return (print_counter++);
	}
	else
	{	
		return 


}
