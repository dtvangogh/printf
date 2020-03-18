## _printf

This is a printf function with the ability to print integers (%d, %i), characters (c), strings (s), %(%), int to binary conversions (%b), reversed strings (%r), and rot13 strings (%R).
 #### Specifier Functions

 I created two files for all the formatter conversions.
 print_functions.c contains the mandatory specifiers %c, %d, %i, and %s.
advanced_print_functions.c contains the advanced specifiers %r, %R, and %b.
| File               | Description                              |
| ------------------ | ---------------------------------------- |
| _printf.c          | this file contains the _printf function. It uses variadic functions to accept an indefinite number of arguments.|
| get_specifier.c    | This file contains the type structure that acts as a door to the formatter functions. It checks to see which specifier function is needed.   |
| print_functions.c The functions included are as followed: | This file contains all the functions that are used to complete mandatory formatter functions.
|print_char |  prints a character.
|print_string | prints a string.
|print_integer | prints an integer up to 10 digits.
|_printchar | uses to display each digit in an integer.
|no_specifier | used to print a string when there is no specifier.|
|advanced_print_functions.c The functions included are as followed| This file contains type formatters for %r, %R, and %b.
|print_reverse |prints a string in reverse.
|reverse.print_rot13 | prints a string with rot13 encryption.
|_putrot13 |rot13s each character individually.
|find_binary | finds the binary value of an integer.
|print_binary | prints the binary value of an integer.
|holberton.h| header file that contains all the function calls.





### Examples of Programs and Function Output
--------------------------------------------
#### _printf.c
```
#include <limits.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", 123456789);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    len = _printf("Percent:[%9]\n");
    len2 = printf("Percent:[%9]\n");
    len = _printf("Percent:[%]\n");
    len2 = printf("Percent:[%]\n");
    len = _printf("Percent:[%%%%]\n");
    len2 = printf("Percent:[%%%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    printf("----------------------------------\n");
    len = _printf("len %%\n");
    len2 = printf("len %%\n");
    printf("----------------------------------\n");
    len = _printf("%s\n",(char *)0);
    len2 = printf("%s\n",(char *)0);
    len = printf("123%s456\n", NULL);
    len2 = printf("123%s456\n", NULL);
    len = _printf("asd%\n");
    len2 = printf("asd%\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("%   d\n", 13);
     printf("%   d\n", 13);
     len = _printf("asd%dasd %i, %d %i %d\n", ui, -42323, -999*9, 4444, 5);
     len2 = printf("asd%dasd %i, %d %i %d\n", ui, -42323, -999*9, 4444, 5);
     _printf("This is %r", "string");
     _printf("Unknown:[%r]\n");
     printf("Unknown:[%r]\n");
	 _printf("This is %R", "string");
	 _printf("Negative:[%d]\n", -100);
	 _printf("%b\n", 9);
}
dtvan@Quang-Vans-MBP:printf$ ./a.out
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[123456789]
Negative:[-762534]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Percent:[        ]
Percent:[        ]
Percent:[]
Percent:[]
Percent:[%%]
Percent:[%%]
Len:[13]
Len:[13]
----------------------------------
len 1323333 hola
len 1323333 hola
Length:[17, 17]
Length:[17, 17]
len %
len %
Length:[6, 6]
Length:[6, 6]
----------------------------------
len z hola
len z hola k
Length:[12, 12]
Length:[13, 13]
(null)
(null)
Length:[1, 1]
Length:[7, 7]
123(null)456
123(null)456
Length:[13, 13]
Length:[13, 13]
asd
asd
Length:[3, 3]
Length:[4, 4]
  d
 13
asd-2147482625asd -42323, -8991 4444 5
asd-2147482625asd -42323, -8991 4444 5
This is gnirtsUnknown:[]
Unknown:[r]
This is rot 13: fgevat
Negative:[-100]
98 in binary is 1001


