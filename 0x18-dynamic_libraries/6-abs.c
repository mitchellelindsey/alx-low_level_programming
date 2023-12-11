#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *@c: The number computed
 * Return: absolute number
 */

int _abs(int c)
{
	if (c < 0)
		return (-c);
	else if (c >= 0)
	{
		return (c);
	}
	return (0);
}
