/*
 * File: _printf.c
 * Author: Alfredo Kambasha
 */

#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format.
 * @format: the character string to print.
 *
 * Return: returns 0 on success.
 */
int _printf(const char *format, ...)
{
	int len = 0; /* length of the current argument*/
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (*format != '\0')
	{
		while (*format != '%' && *format != '\0')
		{
			_putchar(*format);
			len++;
			format++;
		}
		while (*format == '%' && *format != '\0')
		{
			format++;
			switch (*format)
			{
			case 'd': case 'i':
				len += handle_integer((va_arg(args, int)), len);
				format++;
				break;
			case 'c':
				len += handle_char((va_arg(args, int)), len);
				format++;
				break;

			case 's':
				len += handle_string((va_arg(args, char *)), len);
				format++;
				break;

			case '%':
				len++;
				len = handle_percent(len);
				format++;
				break;
			}
		}
	}
	return (len);
}
