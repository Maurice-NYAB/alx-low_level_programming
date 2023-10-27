#include "main.h"

/**
 * flip_bits - a function that returns the number of bits of flipped numbers
 * @n: initial number
 * @m: last number
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, flip = 0;
	unsigned long int prev;
	unsigned long int expo = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		prev = expo >> i;
		if (prev & 1)
			flip++;
	}
	return (flip);
}
