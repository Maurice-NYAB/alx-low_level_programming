#include "main.h"

/**
 * print_last_digit - printing last digit of the function
 * @n: variable to be used
 * Return: print last digit of a number
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}


