#include <stdio.h>

/**
 * main - Checking size function
 *
 * Return: 0 after successful run
 */

int main(void)
{
	printf("size of a char: %d byte(s)", sizeof(char));
	printf("size of int: %d byte(s)", sizeof(int));
	printf("size of long int: %d byte(s)", sizeof(long int));
	printf("size of long long int: %d byte(s)", sizeof(long long int));
	printf("size of float: %d byte(s)", sizeof(float));
	return (0);
}
