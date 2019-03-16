#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - struct for function parameters to print anything
 * @op: the case use
 * @f: the function to parse cases to determine how to print
 */

typedef struct op
{
	char *s;
	void (*f)(va_list list);
} op_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _HOLBERTON_H */
