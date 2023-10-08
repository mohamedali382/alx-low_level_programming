#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: byte of @s2
 * Return: pointer shall point to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str1, str2, str3, i;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	str1 = strlen(s1);
	str2 = strlen(s2);
	str3 = str1 + str2 + n + 1;

	str = malloc(str3);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str1; i++)
		str[i] = s1[i];

	for (i = 0; i < str2; i++)

		str[i + str1] = s2[i];
	str[i] = '\0';

	return (str);
}
