#include "holberton.h"
/**
 * _printf - a bootleg printf
 * @format: the format specifier string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	char numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	unsigned int bytes = 0;
	unsigned int i = 0;
	int (*f)(va_list);
	va_list ap;

	va_start(ap, format);

	/* loop through the format string */
	if (format == NULL)
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			f = get_specifier(format[i]);
			if (f == NULL) /*if no specifier*/
				bytes += no_specifier(format[i]);

			else if (f != NULL)
				bytes += f(ap);
		}
		else if (format[i] == '%' && format[1 + 1] != numbers)
		{
			_putchar(' ');
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{/*end string at  the % signand format[i]*/
			return (1);
		}
		else
		{
			write(1, &format[i], 1);
			bytes++;
		}
		i++;
	}
	va_end(ap);
	return (bytes);
}
