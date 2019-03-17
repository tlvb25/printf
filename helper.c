#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}



/**
 * print_char - prints char from va_list
 * @list: list of ceis var given
 * Return: nothing
 */
int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}



/**
 * _print_int - writes the character c to stdout
 * @ap: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_int(va_list list)
{
	int i, p;

	if ((va_arg(list, int)) < 0)
		_putchar('-');
	for (p = 0, i = 1000000000; i > 0; i /= 10)
	{
		int d = ((va_arg(list, int)) / i) % 10;

		d = d < 0 ? -d : d;
		if (d || p || i == 1)
		{
			_putchar(d + '0');
			p++;
		}

	}
}



/**
 * print_string - function that prints a string
 * @ap: argument paraments
 *
 * Return: string
 */
int print_string(va_list list)
{
	char *s;
	int i;

	s = va_arg(list, char *);

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

void print_number(int n)
{
	int i, p;

	if (n < 0)
		_putchar('-');
	for (p = 0, i = 1000000000; i > 0; i /= 10)
	{
		int d = (n / i) % 10;

		d = d < 0 ? -d : d;
		if (d || p || i == 1)
		{
			_putchar(d + '0');
			p++;
		}

	}
}
