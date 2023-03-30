#include "unistd.h"

/**
 * _putchar - stdout d
 *
 * @d: prints string
 *
 *Retrun: on succesd 1
 */
int _putchar(char d)
{
	return (write(1, &d, 1));

}
