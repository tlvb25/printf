#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>


/**
 * print_fun - function goes through array by struct and returns
 * appropriate value
 * @strings: is it a theory or reality?
 * Return: nothing
 */
int print_fun(char strings)
{
	char char_array[] = {'c', 'i', 's', 'd', '%'};
	int a = 0;

	if (strings == '%')
	{
		return (1);
	}

	while (a < 4)
	{
		if (strings == char_array[a])
		{
			return (1);
		}
		a++;
	}
	return (0);
}


/**
 * _printf - prints string from input
 * @format: pointer to var input
 * Return: nothing
 */
int _printf(const char *format, ...)
{
	int i, increment, retlength;
	va_list args;

	va_start(args, format);
	i = 0;
	increment = 0;
	retlength = 0;
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
			return (-1);
		if (format[i] == '%' && print_fun(format[i + 1]))
		{
			i++;
			if (print_fun(format[i]) == 1)
			{
				increment += (*getfun(format[i]))(args);
				i++;
			}
			else
			{
				_putchar(format[i]);
				i++;
				increment++;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
			increment++;
		}
	}
	increment += retlength;
	va_end(args);
	return (increment);
}
