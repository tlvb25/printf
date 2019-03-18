#include "holberton.h"

/**
 * getfun - identifies type of function to use
 * @
 * Return: nothing
 */

int (*getfun(char var))(va_list list)
{
	var_struct array[] = {
		{'c', print_char},
		{'i', print_int},
		{'s', print_string},
		{'d', print_int},
		{NULL, NULL}
	};

	int c = 0;

	while (c < 4)
	{
		if (getfun[c].var == var)
		{
			return (getfun[c].f);
		}
		c++;
	}
	return (NULL);
}
