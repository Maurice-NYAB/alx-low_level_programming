#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string containing character
 * @c: character to be located
 * Return: A pointer to c or NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
