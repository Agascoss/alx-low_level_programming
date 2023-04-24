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
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural.
 *
 * @n: number to calculate the sqaure root.
 *
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
