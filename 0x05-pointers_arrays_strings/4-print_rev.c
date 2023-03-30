#include "main.h"

/**
 * print_rev - reverse print
 *
 * @s: pointer to be revesed
 *
 * Return: 0 (success)
 */
int _putchar(char c);
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
