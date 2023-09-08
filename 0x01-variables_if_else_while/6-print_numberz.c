#include <stdio.h>

/**
 * main - Print numbers
 *
 * Return: single digit numbers
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
