#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct var - struct for function parameters to print anything
 * @s: the string member of typedef struct var
 * @var: struct name
 * @f: the function member of typedef struct var
 */
typedef struct var
{
	char var;
	int (*f)(va_list list);
} var_struct;


int print_b(va_list ap);
int print_octal(va_list ap);
int print_address(va_list args);
int print_rot(va_list list);
int _putchar(char c);
int print_number(int n);
int print_perc(va_list list);
int print_char(va_list list);
int print_int(va_list list);
int print_string(va_list list);
int print_unsigned(va_list args);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _printf(const char *format, ...);
int (*getfun(char var))(va_list list);
char *rot13(char *s);


#endif /* _HOLBERTON_H */
