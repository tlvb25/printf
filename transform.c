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
