#include "main.h"

/**
 * _putchar - function called
 *
 * _puts - print a string
 *
 * @str: pointer of the string
 *
 * Return: 0 (success)
 */
int _putchar(char c);
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
