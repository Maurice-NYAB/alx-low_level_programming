#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: variable string to be determined
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
