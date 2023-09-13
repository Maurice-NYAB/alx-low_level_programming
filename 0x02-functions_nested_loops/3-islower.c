#include "main.h"

/**
 * _islower - checking for lower case alphabets
 *@c: variable to be checked
 * Return: 1 is a lowercase or 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

