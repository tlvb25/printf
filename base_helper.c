#include "holberton.h"

/** These Helper Functions were provided to me by classmate Bill Huang *


/**
 * print_octal - a function converts unsigned integer to octal
 * @octal: next argument type
 *
 * Return: return pointer to the converted string
 */
int print_octal(va_list octal)
{
	unsigned int i, res, tens, temp, count, results;
	char *str;
	static char buffer[50];

	str = &buffer[0];
	res = va_arg(octal, unsigned int);
	count = i = 0;
	tens = 1;
	temp = res;
	while (temp >= 8)
	{
		tens *= 8;
		temp /= 8;
		count++;
	}
	while (tens >= 1)
	{
		str[i++] = (((res / tens) % 8) + '0');
		tens /= 8;
	}
	str[i] = '\0';
	_putchar(str);
	return (i + 1);
}


/**
 * print_hex - a function converts unsigned integer to hexidecimal
 * @hex: next argument parameter
 * Return: return pointer to the converted string
 */
int print_hex(va_list hex)
{
	unsigned int res, results;
	char *str;

	res = va_arg(hex, unsigned int);
	str = convert(res, 16, 0);
	results = atoi(str);
	return (results);
}

/**
 * print_HEX - a function converts unsigned integer to hexidecimal
 * @HEX: next argument parameter
 * Return: return pointer to the converted string
 */
int *print_HEX(va_list HEX)
{
	unsigned int res, results;
	char *str;

	res = va_arg(HEX, unsigned int);
	str = convert(res, 16, 1);
	results = atoi(str);
	return (results);
}