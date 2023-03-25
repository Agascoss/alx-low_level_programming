#include "main.h"

/**
 * _isdigit - look for digit
 *
 * @c: parameter to be checked
 *
 * Return: 1 if it is a digit and 0 if otherwise
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
