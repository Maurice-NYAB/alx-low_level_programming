#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: First string
 * @s2: second string
 * @n: number of bytes
 * Return: character pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *prnt_ptr;
	unsigned int len_s1, len_s2;

	len_s1 = 0;
	while
		(s1[len_s1] != '\0'){
			len_s1++;
		}
	len_s2 = 0;
	while
		(s2[len_s2] != '\0'){
			len_s2++;
		}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len_s2)
		n = len_s2;
	prnt_ptr = malloc((len_s1 + n + 1) * sizeof(char));
	if (prnt_ptr == NULL)
		return (NULL);
	len_s1 = 0;
	while
		(s1[len_s1] != '\0'){
			prnt_ptr[len_s1] = s1[len_s1];
			len_s1++;
		}
	len_s2 = 0;
	while
		(len_s2 < n){
			prnt_ptr[len_s1] = s2[len_s2];
			len_s1++;
			len_s2++;
		}
	prnt_ptr[len_s1] = '\0';
	return (prnt_ptr);
}
