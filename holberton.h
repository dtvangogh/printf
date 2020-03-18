#ifndef HOLBERTONH_
#define HOLBERTONH_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct types -in get format function to find specifier function
 * @ch: the format specifier
 * @f: a pointer to a function
 */
typedef struct types
{
	char ch;
	int (*f)(va_list);
} types_t;

/* function prototypes here */
int _printf(const char *format, ...);
int (*get_specifier(char s))(va_list);
int print_char(va_list ap);
int print_string(va_list ap);
int print_reverse(va_list ap);
int print_integer(va_list ap);
int print_rot13(va_list ap);
int _putrot13(char c);
int no_specifier(char);
int _putchar(char c);
int _printchar(int n);
int find_binary(unsigned int n);
int print_binary(va_list ap);
#endif
