#include <unistd.h>
#include "holberton.h"

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
 * @list: argument list
 * Return: resulting char
 */
int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}


/**
 * print_int - prints ints from va_list
 * @list: argument list
 * Return: resulting int
 */
int print_int(va_list list)
{
	int a = va_arg(list, int);

	return (print_number(a));
}


/**
 * print_string - prints string from va_list
 * @list: argument list
 * Return: resulting string
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
 * print_number - prints number from va_list
 * @n: variable to be incremented through
 * Return: resulting number
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
