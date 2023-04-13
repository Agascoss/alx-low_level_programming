#include <stdio.h>

#include "main.h"

/**
 * _putchar - output the charcter c
 *
 * @c: charcter to be printed
 *
 * Return: return 1 (success), return -1 for error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
