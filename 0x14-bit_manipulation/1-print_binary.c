#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
	int a, b = 0;
	unsigned long int c;

	for (a = 63; a >= 0; a--)
	{
		c = n >> a;
		if (c & 1)
		{
			_putchar('1');
			b++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
