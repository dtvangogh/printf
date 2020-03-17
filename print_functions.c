#include "holberton.h"
#include <ctype.h>


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
 * print_string - prints a string
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
	if (s != NULL) /* print and count the string */
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			write(1, &s[i], 1);
			count++;
		}
	}
	return (count);
}
/**
 * print_integer - prints a string
 * @ap: an argument from a variadic argument list
 *
 * Return: the number of characters printed
 */
int print_integer(va_list ap)
{
	int count = 0;
	int n = va_arg(ap, int);

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -1 * n;
		_printchar(n);
		count++;
	}
	else

	{
		_printchar(n);
		count++;
	}
	return (count);
}
/**
 * no_specifier - prints when there is no format specifier
 * @after:char after the percent sign
 *
 * Return: the count of characters
 */
int no_specifier(char after)
{
	int i;
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
	if (isdigit(after))
	{
		for (i = 0; i < after - 49; i++)
			{
			_putchar(' ');
			return (1);
		}

	}
	else
	{
		write(1, &empty, 1);
		return (1);
	}
	return (0);
}
