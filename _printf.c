#include "holberton.h"

void print_all(const char * const format, ...)
{
	va_list ap;

	int a = 0, b = 0;
	char *sep = "";
	op_t ops[] = {
		{"c", prt_char},
		{"d", prt_dec},
		{"i", prt_int},
		{"f", prt_float},
		{"s", prt_string},
		{"%", prt_perc},
		{NULL, NULL}};

	va_start(ap, format);

	while (format && format[a])
	{
		while (ops[b].s)
		{
			if (format[a] == *ops[b].s)
			{
				printf("%s", sep);
				ops[b].f(ap);
				sep = ", ";
			}
			b++;
		}
		a++;
		b = 0;

	}
	printf("\n");
	va_end(ap);
}
