#include "main.h"

/**
 * swap_int - function that swap values
 *
 * @a: swap to store value of b
 *
 * @b: swap to store the value of a
 *
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
