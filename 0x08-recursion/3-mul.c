#include <stdio.h>
#include "main.h"

/**
 *main - multiplies two numbers
 *
 *@argc: argument count
 *
 *@argv: argument array
 *
 *Return: return 0 (success) 1 for error.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
