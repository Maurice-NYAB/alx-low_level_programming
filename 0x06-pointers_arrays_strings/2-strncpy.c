#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: number of byte
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
