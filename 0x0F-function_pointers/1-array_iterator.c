#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function
 * @array: the array
 * @size: size of the array
 * @action: function to be performed on each element of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
