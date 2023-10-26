#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: parameter 1
 * @index: parameter 2
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
