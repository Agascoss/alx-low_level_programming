#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *malloc_checked - allocate memory
 *
 * @b: number of byte to allocate
 *
 * Return: return and pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Error: malloc failed\n");
		exit(98);
	}
	return (ptr);
}
