#include "main.h"

/**
*_isupper-Function for checking upper or lower case
*@c: The variable
*Return: 1 when upper case or 0 when lower case
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
