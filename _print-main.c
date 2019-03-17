#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>



/**
 * print_char - prints char from va_list
 * @list: list of ceis var given
 * Return: nothing
 */


void print_all(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);

	const char *inc;
	int i = 0;

	/*for (inc = format; *inc; inc++)
	{
		i++;*/
		if (format)
		{
			for (i = 0; i 
