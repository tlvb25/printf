#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>



/**
 * print_char - prints char from va_list
 * @list: list of ceis var given
 * Return: nothing
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}



/**
 * prt_string - function that prints a string
 * @ap: argument paraments
 *
 * Return: string
 */

void prt_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (!s)
	{
		s = "(nil)";
	}
	printf("%s", s);
}



/**
 * print_int - prints int for function
 * @list: accessing list for i var
 * Return: nothing
 */

void print_int(va_list list)
{
	int i;
	i = va_arg(list, int);
	printf("%i", i);
}



/**
 * print_float - function prints floats by struct
 * @list: accessing list for flaot var
 * Return: nothing
 */

void print_float(va_list list)
{
	float fl;
	fl = va_arg(list, double);
	printf("%f", fl);
}



/**
 * print_all - function prints anything
 * @format: list of types of arguments passed to function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;

	int a = 0, b = 0;
	char *sep = "";
	op_t ops[] = {
		{"c", print_char},
		{"d", print_dec},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{"%", print_perc},
		{NULL, NULL}};

	va_start(list, format);

	while (format && format[a])
	{
		while (ops[b].s)
		{
			if (format[a] == *ops[b].s)
			{
				printf("%s", sep);
				ops[b].f(list);
				sep = ", ";
			}
			b++;
		}
		a++;
		b = 0;

	}
	printf("\n");
	va_end(list);
	
}
