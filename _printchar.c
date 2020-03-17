#include "holberton.h"
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
