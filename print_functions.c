#include "holberton.h"


/**
 * print_char - prints a character
 * @ap: an argument from argument list
 *
 * Return: the count of characters
 */
int print_char(va_list ap)
{
	char c; /* will hold the value output by va_arg */

	c = va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}

/**
 * print_str - prints a string
 * @ap: an argument from a variadic argument list
 *
 * Return: the count of characters
 */
int print_string(va_list ap)
{
	int count;
	char *s = va_arg(ap, char *);
	int i;


	count = 0;
	if(s != NULL) /* print and count the string */
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			write(1, &s[i], 1);
			count++;
		}
	}
	return (count);
}

int print_integer(va_list ap)
{
	int negative;
	int n = va_arg(ap, int);
	unsigned int m;
	
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
		_printchar(n);
	}
	else
	
	{
		_printchar(n); 
	}
	return(n);
}
int no_specifier(char after)
{
	char percent_sign  = '%';
	char empty = 0;
	

	if (after == '%')
	{
		write(1, &after, 1); /**if %% **/
		return (1);
	}

	if (after == ' ')
	{
		write(1, &empty, 1);
		return (1);
	}
	if (after == '\n')
	{
		write(1, &after, 1);
		return (2);
	}
	else
	{
		write(1, &empty, 1);
		return (1);
	}
	return (0);
}