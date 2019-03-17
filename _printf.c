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
			if (format [b + 1] == '\0' || format [b + 1] == ' ')
                        {
                                va_end(list);
                                return (0);
                        }
                        if (format [a + 1} == '%')
                        {
                                _putchar('%');
                                b++;
                        }
                        _putchar(format[a]);
                        /*if (format[a] == )*/
                        b++;
                }
                a++;
                b = 0;

        }
        va_end(list);
	return (0);
}
