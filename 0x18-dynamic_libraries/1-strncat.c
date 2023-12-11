#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k, r;

	k = 0;
	r = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (r < n && src[r] != '\0')
	{
		dest[k] = src[r];
		k++;
		r++;
	}
	dest[k] = '\0';
	return (dest);
}
