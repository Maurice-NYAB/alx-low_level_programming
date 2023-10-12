#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that returns an integer
 * @array: array to search from
 * @size: size of array
 * @cmp: function pointer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) == 1)
			return (a);
	}
	return (-1);
}
