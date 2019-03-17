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
		{"%", print_perc},
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_string},
		{NULL, NULL}};

	int a = 0;
	int b = 0;
	void *sep = "";

	va_start(list, format);
	while (format && format[a] != '\0')
	{
		if (format[a] == '%')
		{
			if (format[a + 1] == '%')
				_putchar('%');
			while (array[b].s)
			{
				if (format[a + 1] == *array[b].s)
				{
					array[b].f(list);
				}
				b++;
			}
		}
		else
			_putchar(format[a]);
		a++;
	}
	va_end(list);
	return (0);
}
