#ifndef HOLBERTONH_
#define HOLBERTONH_

#include <stdio.h>  
#include <stdarg.h> 
#include <unistd.h> 

/**
 * struct relations - draws a relationship between a frmt spec and a f-ptr
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
int print_integer(va_list ap);
int no_specifier(char);
int _putchar(char c);
int _printchar(int n);
#endif 
