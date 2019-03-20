#include "holberton.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @ap: Action pointer
 *
 * Return: Number of digits
 */

int print_unsigned(va_list ap)
{
	int i;
	int count = 0;
	int mint = va_arg(ap, int);
	unsigned int n;

	n = mint;
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 != 0)
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}

/**
 * print_rot - takes a string and prints the rot13 value
 * @list: a string to change to rot 13
 *
 * Return: returns the number of characters printed
 */
int print_rot(va_list list)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *comp = va_arg(list, char *);
	int i;
	int j;

	for (i = 0; comp[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (comp[i] == alpha[j])
			{
				_putchar(rot13[j]);
			}
		}
	}
	return (i);
}

/**
 * print_addr - function prints an address
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_addr(va_list args)
{
	unsigned long int adr = va_arg(args, unsigned long int);
	char *s;

	s = print_conv(adr, 16, 0);
	if (!adr)
		return (_printf("(nil)"));
	return (_printf("0x%s", s));
}
/**
 * print_octal - Prints an octal number
 * @ap: Action pointer
 *
 * Return: Number of digits
 */

int print_octal(va_list ap)
{
	int i;
	unsigned int n;
	char *str;
	int increment = 0;

	n = va_arg(ap, unsigned int);
	str = convert(n, 8);

	for (i = 0; str[i]; i++)
	{
		increment += _putchar(str[i]);
	}
	return (increment);
}


/**
 * print_b - function that prints a binary number from int
 * @ap: the action pointer
 *
 * Return: the binary number
 */

int print_b(va_list ap)
{
	int i;
	unsigned int n;
	char *str;
	int increment = 0;

	n = va_arg(ap, unsigned int);
	str = convert(n, 2);

	if (!n)
	{
		increment += _putchar('0');
	}
	for (i = 0; str[i] && n; i++)
	{
		increment += _putchar(str[i]);
	}
	return (increment);
}