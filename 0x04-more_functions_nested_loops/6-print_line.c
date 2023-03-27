#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: print number of times
 *
 * Return: 0 (success)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
