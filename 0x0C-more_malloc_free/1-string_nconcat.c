#include "main.h"

/**
 * string_nconcat - that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: byte of @s2
 * Return: pointer shall point to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str1, str2, i, j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (str1 = 0; str1[s1] != '\0'; str1++)
		;
	for (str2 = 0; str2[s2] != '\0'; str2++)
		;
	str = malloc(str1 + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)

		str1[i] = s1[i];


	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++
	}
	str[i] = '\0';
	return (str);
}
