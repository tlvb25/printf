#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct var - struct for function parameters to print anything
 * @s: the string member of typedef struct var
 * @f: the function member of typedef struct var
 */
typedef struct var
{
	char *s;
	int (*f)(va_list list);
} var_struct;


int _putchar(char c);
int print_number(int n);
int print_perc(va_list list);
int print_char(va_list list);
int print_int(va_list list);
int print_string(va_list list);
int print_number(int n);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _printf(const char *format, ...);
/**
 * char *_strdup(char *str);
 * int _atoi(char *s);
 * char *cap_string(char *);
 * char *string_toupper(char *);
 * void reverse_array(int *a, int n);
 * int _strcmp(char *s1, char *s2);
 * char *_strncpy(char *dest, char *src, int n);
 * char *_strncat(char *dest, char *src, int n);
 * char *_strcat(char *dest, char *src);
 * char *_strcpy(char *dest, char *src);
 * void print_array(int *a, int n);
 * void puts_half(char *str);
 * void puts2(char *str);
 * void rev_string(char *s);
 * void print_rev(char *s);
 * void _puts(char *str);
 * int _strlen(char *s);
 * void swap_int(int *a, int *b);
 * void reset_to_98(int *n);
 * void print_triangle(int size);
 * void print_square(int size);
 * void print_diagonal(int n);
 * void print_line(int n);
 * void more_numbers(void);
 * void print_most_numbers(void);
 * void print_numbers(void);
 * int mul(int a, int b);
 * int _putchar(char c);
 * void print_alphabet(void);
 * void print_alphabet_x10(void);
 * int _islower(int c);
 * int _isalpha(int c);
 * int print_sign(int n);
 * int _abs(int);
 * int print_last_digit(int);
 * void times_table(void);
 * void jack_bauer(void);
 * int add(int, int);
 * void print_to_98(int n);
 * int _isupper(int c);
 * int _isdigit(int c);
 */
#endif /* _HOLBERTON_H */
