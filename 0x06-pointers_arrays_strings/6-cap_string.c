#include "main.h"

/**
 * cap_string - capitalize all words in a string
 * @strng: string
 * Return: A pointer to the changed string
 */

char *cap_string(char *strng)
{
	int ab = 0;

	while (strng[ab])
	{
		while (!(strng[ab] >= 'a' && strng[ab] <= 'z'))
			ab++;
				if (strng[ab - 1] == ' ' ||
				strng[ab - 1] == '\t' ||
				strng[ab - 1] == '\n' ||
				strng[ab - 1] == ',' ||
				strng[ab - 1] == ';' ||
				strng[ab - 1] == '.' ||
				strng[ab - 1] == '!' ||
				strng[ab - 1] == '?' ||
				strng[ab - 1] == '"' ||
				strng[ab - 1] == '(' ||
				strng[ab - 1] == ')' ||
				strng[ab - 1] == '{' ||
				strng[ab - 1] == '}' ||
				ab == 0)
			strng[ab] -= 32;
			ab++;
	}
	return (strng);
}
