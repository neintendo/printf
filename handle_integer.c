/*
 * File: handle_integer.c
 * Author: Alfredo Kambasha
 */

#include "main.h"
#include <stdio.h>

int count_digits(int n);

/**
 * handle_integer - handles 'd' and 'i' conversion specifiers.
 * @i: the integer to print.
 * @len: length of the integer.
 *
 * Return: @len on success.
 */
int handle_integer(int i, int len)
{
	int neg;
	const int number = i; /* copy of @i not modified by recursive calls */

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		neg = count_digits(i - i + 1);
	}

	if (i == 0)
	{
		_putchar('0');
		len = 1;
		return (len);
	}

	if (i / 10)
		handle_integer(i / 10, len);

	_putchar((i % 10) + '0');

	len = count_digits(i);

	if (number < 0)
		return (len + neg);

	return (len);
}

/**
 * count_digits - counts the number of digits in an integer.
 * @n: the integer to count
 *
 * Return: returns count on success.
 */
int count_digits(int n)
{
	int count = 0;

	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
