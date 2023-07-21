/*
 * File: handle_string.c
 * Auth: Alfredo Kambasha
 */

#include "main.h"

/**
 * handle_string - handles 's' conversion specifier.
 * @s: the string to print.
 * @len: string length.
 * Description: converts @s to a character string.
 *
 * Return: @len on success.
 */
int handle_string(char *s, int len)
{
	while (*s)
	{
		_putchar(*s);
		len++;
		s++;
	}
	return (len);
}
