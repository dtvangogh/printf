#include "holberton.h"
/**
 * print_reverse - prints a string in reverse
 * @ap: an argument from a variadic argument list
 *
 * Return: the number of characters printed
 */
int print_reverse(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i = 0;

	int length = 0;


	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = (length - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (length);
}
/**
 * print_rot13- prints a string with rot 13 encrypt
 * @ap: an argument from a variadic argument list
 *
 * Return: the number of characters printed
 */
int print_rot13(va_list ap)
{
	int i = 0;
	int count = 0;
	char *s = va_arg(ap, char *);/*i should strdup?*/

	for (i = 0; s[i] != '\0'; i++)
	{
		_putrot13(s[i]);
		count++;
	}
	return (count);
}
/**
 * _putrot13 - writes the character c with rot13 encryption
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putrot13(char c)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 =    "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int index;

		for (index = 0; index < 52; index++)
		{
			if (c == alphabet[index])
			{
				c = rot13[index];
				write(1, &c, 1);
				break;
			}
		}
	return (0);
}
/**
 * find_binary - gets binary value of an unsigned int
 * @n: an unsigned int
 *
 * Return: the number of characters printed
 */
int find_binary(unsigned int n)
{
	if (n / 2 != 0)
	{
		find_binary(n / 2);

	}
	if (n % 2 == 0)
	{
		_putchar('0');
	}
	else if (n % 2 != 0)
		_putchar('1');
	return (0);
}
/**
 * print_binary - prints the binary value of a num
 * @ap: an argument from a variadic argument list
 *
 * Return: the number of characters printed
 */
int print_binary(va_list ap)
{
	int count = 0;

	unsigned int n = va_arg(ap, int);

	find_binary(n);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (7);
}
