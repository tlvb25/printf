#include "holberton.h"

/**
 * rot13 - encodes string to rot13
 * @s: given
 * Return: pointer to s
 */

char *rot13(char *s)
{
	int c1, c2;
	char *test = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encode = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c1 = 0; s[c1] != '\0'; c1++)
		for (c2 = 0; test[c2] != '\0'; c2++)
			if (test[c2] == s[c1])
			{
				s[c1] = encode[c2];
				break;
			}
	return (s);
}
