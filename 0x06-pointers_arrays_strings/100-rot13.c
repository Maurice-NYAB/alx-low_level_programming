#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @str: string to be encoded
 * Return: String
 */

char *rot13(char *str)
{
	int a, b;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			if (str[a] == c[b])
			{
				str[a] = d[b];
				break;
			}
		}
	}
	return (str);
}
