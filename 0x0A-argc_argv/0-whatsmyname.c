#include <stdio.h>

/**
 * main - print name, followed by new line
 *
 * @argc: number of command line arguments
 * @argv: array that contains the command line arguments
 *
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
