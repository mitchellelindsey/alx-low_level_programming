#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: function parameter
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar("\\");
		}
		_putchar("\n");
	}
}
