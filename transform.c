#include "holberton.h"


/**
 * convert - function that converts our int to hex, octal, or binary
 * @num: the number passed into the function
 * @base: the base to convert to
 *
 * Return: the convertednumber of a certain base
 */

char *convert(unsigned int num, int base)
{
	const char array[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	while (num != 0)
	{
		*--ptr = array[num % base];
		num /= base;
	}

	return (ptr);
}


/**
 * print_conv - function converts input to specified base
 * @num: the input number
 * @base: the specified base
 * @cap: a flag to print hex in capital. 0 is lowercase
 * Return: number of characters printed
 */
char *print_conv(unsigned long int num, int base, int cap)
{
	char *string = "0123456789abcdef";
	char *String = "0123456789ABCDEF";
	char arr[50];
	char *ptr;

	ptr = &arr[49];
	*ptr = '\0';

	if (cap)
		string = String;
	do	{
		*--ptr = string[num % base];
		num /= base;
	} while (num);
	return (ptr);
}