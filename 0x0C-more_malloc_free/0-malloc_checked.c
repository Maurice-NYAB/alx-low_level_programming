#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory allocated
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr_mal;

	ptr_mal = malloc(b);
	if (ptr_mal == NULL)
		exit(98);
	return (ptr_mal);
}
