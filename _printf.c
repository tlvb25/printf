#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * prt_string - function that prints a string
 * @ap: argument paraments
 *
 * Return: string
 */

void prt_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (!s)
	{
		s = "(nil)";
	}
	printf("%s", s);
}
