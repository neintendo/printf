#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%d", 0);
	len2 = printf("%d", 0);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("Len 1: %d, Len 2: %d\n", len, len2);
		fflush(stdout);
		return (1);
	}
	return (0);
}