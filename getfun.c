#include "holberton.h"

/**
 * getfun - identifies type of function to use
 * @var: name of char to be referenced in pointer to function
 * Return: nothing
 */
int (*getfun(char var))(va_list list)
{
	var_struct array[] = {
		{'c', print_char},
		{'i', print_int},
		{'s', print_string},
		{'d', print_int},
		{'u', print_unsigned},
	    {'R', print_rot},
		{'p', print_addr},
		{'o', print_octal},
		{'b', print_b},
		{'\0', NULL}
	};

	int c = 0;

	while (array[c].var)
	{
		if (array[c].var == var)
		{
			return (array[c].f);
		}
		c++;
	}
	return (NULL);
}


/**
 * print_unsigned - prints unsigned numbers
 * @list: parameter argument
 *
 * Return: resulting digits
 */
int print_unsigned(va_list list)
{
	unsigned int num;
	int results;

	num = va_arg(list, unsigned int);
	results = print_number(num);
	return (results);
}
