/*
 * File: handle_char.c
 * Author: Alfredo Kambasha
 */

#include "main.h"

/**
 * handle_char - handles 's' conversion specifier.
 * @c: the character to print.
 * @len: length of the characters.
 *
 * Return: @len on success.
 */
int handle_char(char c, int len)
{
	_putchar(c);
	len++;
	return (len);
}
