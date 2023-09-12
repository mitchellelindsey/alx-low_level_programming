#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @s: reurns last digit
 * Return: last digit
 */

int print_last_digit(int s)
{
	int u;

	u = s % 10;
	if (s < 0)
		u = -u;
	_putchar(u + '0');
	return (u);
}
