#include "main.h"

/**
 * _sqrt_recursion - Computes the natural square root of a number
 *
 * @n: the number to compute the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	for (i = 1; i * i <= n; i++)
	{
		if (i * i == n)
			return (i);
	}
	return (-1);
}
