#include "holberton.h"

int _printchar(int n)
{
	if (n / 10)
	{
		_printchar(n / 10); 
	}
	_putchar(n % 10 + '0');
	return (0);
}