#include "main.h"
 #include <stdio.h>

/**
 * main - Prints the program name
 *
 * @argc: The number of arguments
 *
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 upon success.
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);

	return (0);

}
