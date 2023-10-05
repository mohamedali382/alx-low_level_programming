#include "main.h"
#include <stdlib.h>

/**
 * len - find the length of the stirng
 * @str: input string
 * Return: length of string
*/

int len(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
		return (i);
}

/**
 * str_concat -  concatenates two strings
 * @s1: input 1st string
 * @s2: input 2nd string
 * Return: 0 or pointer
*/

char *str_concat(char *s1, char *s2)
{

	int l1 = len(s1);
	int l2 = len(s2);
	int i;
	char *s = malloc((l1 + l2) * sizeof(char) + 1);


		if (s == 0)
			return (0);
		for (i = 0; i <= (l1 + l2); i++)
		{
			if (i < l1)
			s[i] = s1[i];

			else
				s[i] = s2[i - l1];
		}
		return (s);
}
