#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int v;
	int sum;

	sum = 0;

	for (v = 0; v < 1024; v++)
	{
		if ((v % 3 == 0) || (v % 5 == 0))
		{
			sum = sum + v;
		}
	}
	printf("%d\n", sum);
	return (0);
}
