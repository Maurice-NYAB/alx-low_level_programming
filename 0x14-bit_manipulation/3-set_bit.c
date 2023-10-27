#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * @n: a pointer to change a number
 * @index: Index starting from 0
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
