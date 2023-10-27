#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0
 * @n: A pointer to the bit
 * @index: Index starting from 0
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
