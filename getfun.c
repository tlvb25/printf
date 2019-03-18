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
 * print_fun - function goes through array by struct and returns
 * appropriate value
 * @strings: is it a theory or reality?
 * Return: nothing
 */
int print_fun(char strings)
{
	char char_array[] = {'c', 'i', 's', 'd'};
	int a = 0;

	if (strings == '%')
	{
		return (1);
	}

	while (a < 4)
	{
		if (strings == char_array[a])
		{
			return (1);
		}
		a++;
	}
	return (0);
}

