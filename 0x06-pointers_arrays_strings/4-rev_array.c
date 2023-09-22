#include "main.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: Array of integers to be reversed
 * @n: number of elements in array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int b, c;

	for (c = n - 1; c >= n / 2; c--)
	{
		b = a[n - 1 - c];
		a[n - 1 - c] = a[c];
		a[c] = b;
	}
}

