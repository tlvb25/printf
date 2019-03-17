#include "holberton.h"



/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: Integer
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
 * print_perc - function print "%" sign
 * @void:
 *
 * Return - returns the printed "%"
 */
int print_perc(va_list list)
{
	(void) list;
	return (_putchar('%'));
}



/**
 * _print_int - writes the character c to stdout
 * @list: The character to print
 *
 * Return: integer
 */
int print_int(va_list list)
{
	int i = va_arg(list, int);

	return (print_number(i));
}


/**
 * print_string - function that prints a string
 * @list: argument paraments
 *
 * Return: integer
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



/**
 * print_number - prints an integer
 * @n: the integer passed into function
 *
 * Return: the printed number (sum)
 */
int print_number(int n)
{
	int i, p, sum = 0;

	if (n < 0)
		sum += _putchar('-');
	for (p = 0, i = 1000000000; i > 0; i /= 10)
	{
		int d = (n / i) % 10;

		d = d < 0 ? -d : d;
		if (d || p || i == 1)
		{
			sum += _putchar(d + '0');
			p++;
		}

	}
	return (sum);
}
