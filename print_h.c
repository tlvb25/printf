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
