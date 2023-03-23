#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @i:  funtion parameter
 *
 * Return: d (success)
 */

int print_last_digit(int i)
{
	int d;

	d = i % 10;
	if (i < 0)
		d = -d;
	_putchar(d + '0');
	return (d);
}
