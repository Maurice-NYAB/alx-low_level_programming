#include "main.h"
#include <stdio.h>

/**
 * times_table - printing the 9 tmes table
 *
 * Return: 9 times starting from 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			c = a * b;
			if (b == 0)
				printf("%d, ", c);
			else
			{
				printf("%2d", c);
				if (b != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
