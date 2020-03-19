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
	else
		_printf("(null)");
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
	}
	else

	{
		_printchar(n);

	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	if (n == 0)
		{
			count++;
		}
	return (count);
}
/**
 * _printchar - prints a string
 * @n: the value of the variable printed by print_integer
 *
 * Return: the count of characters
 */
int _printchar(int n)
{
	if (n / 10)
	{
		_printchar(n / 10);
	}
	_putchar(n % 10 + '0');
	return (0);
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
	}
	if (after == '\n')
	{
		write(1, &after, 1);
	}
	if (isdigit(after))
	{
		for (i = 0; i < after - 49; i++)
			{
			_putchar(' ');
		}

	}
	if (after == ']')
	{
		write(1, &empty, 1);
		write(1, &after, 1);
	}
	else
	{
		write(1, &empty, 1);
	}
	return (0);
}
