#include <stdio.h>

/**
 * main - Reverse alphabets
 *
 * Return: z to a
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
