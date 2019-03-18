#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>



/**
 * _printf - prints string from input
 * @format: pointer to var input
 * Return: nothing
 */

int print_fun(char strings)
{
	char char_array[] = {'c', 'i', 's', 'd'};
	int a = 0;

	if (strings == '%')
		return (1);
	while (a < 4)
	{
		if (strings == char_array[a])
			return (1);
		a++;
	}
	return (0);
}

{
	int a = 0;
	increment = 0;
	whole_string = 0;

	va_list list;

	va_start(list, format);

	if (format == NULL)
	{
		return (-1);
	}
	while (format[a])
	{
		if (format[a] == '%' && !format[a + 1])
		{
			return (-1);
		}
		if (format[a] == '%' && print_fun(format[a + 1]))
		{
			a++;

			if (print_fun(format[a]) == 1)
			{
				whole_string += (*getfun(format[a]))(list);
				a++;
			}

			else
			{
				_putchar(format[a]);
				a++;
				increment++;
			}
		}

		else
		{
			_putchar(format[a]);
			a++;
			increment++;
		}
	}

	increment += whole_string;
	va_end(list);
	return (increment);
}
