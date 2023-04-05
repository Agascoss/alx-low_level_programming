#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout.
 *
 * @c: The character to be written.
 *
 * Return: returns the number of characters written (1) on success, or -1 on failure.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}

