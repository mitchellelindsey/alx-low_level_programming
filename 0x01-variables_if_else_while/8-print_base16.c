#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)

{
	int num;
	char p;

	for (num = 0 ; num < 10 ; num++)
		putchar((num % 10) + '0');

	for (p = 'a' ; p <= 'f' ; p++)
		putchar(p);
	putchar('\n');
	return (0);

}
