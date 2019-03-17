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


int _printf(const char *format, ...)
{
	va_list list;

	var_struct array[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}};

	int a = 0;
	int b = 0;
	char *sep = "";

	va_start(list, format);
	/*const char *inc;*/

	while (format && format[a])
	{
		while (array[b].s)
		{
			if (format[a] == *array[b].s)
			{
				printf("%s", sep);
				array[b].f(list);
				sep = ", ";
			}
			if (format
			b++;
		}
		a++;
		b = 0;

	}
	printf("\n");
	va_end(list);
	
}
