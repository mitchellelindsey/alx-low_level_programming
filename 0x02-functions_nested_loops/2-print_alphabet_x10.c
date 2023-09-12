#include "main.h"

/**
 * print_alphabet - function that prints ten times the alphabet in lowercase
 *
 * Return: void here
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 'a' ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}

}
