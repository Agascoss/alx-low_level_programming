#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print numbers
 *
 * @n: parameter
 *
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	int d;

	if (n >= 0 && n <= 98)
	{
		for (d = n; d <= 98; d++)
		{
			printf("%d", d);
			if (d != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (d = n; d <= 98; d++)
		{
			printf("%d", d);
			if (d != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (d = n; d >= 98; d--)
		{
			printf("%d", d);
			if (d != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", n);
}
