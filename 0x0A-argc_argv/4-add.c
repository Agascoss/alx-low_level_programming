#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 *
 * @argc:  argument count
 *
 * @argv:  argument array
 *
 * Return: 0 (success) 1 on faliure
 */

int main(int argc, char *argv[])
{
	int num, i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
