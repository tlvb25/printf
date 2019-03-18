#include "holberton.h"

/**
 * print_char - prints char from va_list
 * @list: list of ceis var given
 * Return: identified char
 */
int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}


/**
 * print_int - prints ints from va_list
 * @list: list of ceis var given
 * Return: identified int
 */
int print_int(va_list list)
{
	int a = va_arg(list, int);

	return (print_int(a));
}


/**
 * print_string - prints string from va_list
 * @list: list of ceis var given
 * Return: identified string
 */
int print_string(va_list list)
{
	char *s;
	int a = 0;

	s = va_arg(list, char*);

	if (s == NULL)
	{
		s = "(nill)";
		if (s[a] == '\0')
		{
			_putchar(s[a]);
			a++;
		}
	}
	for (a = 0; s[a]; a++)
	{
		_putchar(s[a]);
	}
	return (a);
}



/**
 * print_int - prints string from va_list
 * @list: list of ceis var given
 * Return: identified string
 */
int print_int(va_list list)
{
	int i, p, sum = 0;

	if (i < 0)
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
