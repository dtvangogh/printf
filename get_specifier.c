#include "holberton.h"

/**
 * get_specifier - selects a function to print out the data type
 * @s: the identifier (after the % sign)
 *
 * Return: a pointer to function
 */
int (*get_specifier(char s))(va_list)
{
	int i = 0;
	types_t types[] = {
		{'d', print_integer},
		{'i', print_integer},
		{'s', print_string},
		{'c', print_char},
		{'r', print_reverse},
		{'R', print_rot13},
		{'b', print_binary},

		{'\0', NULL}
	};
	while (i < 7)
	{
		if (s == types[i].ch)
			return (types[i].f);
		i++;
	}
	return (types[i].f);
}
