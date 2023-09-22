#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase
 * @strng: string to be changed
 * Return: A pointer to the changed string
 */

char *string_toupper(char *strng)
{
	int a = 0;

	while (strng[a])
	{
		if (strng[a] >= 'a' && strng[a] <= 'z')
			strng[a] -= 32;
				a++;
	}
	return (strng);
}
