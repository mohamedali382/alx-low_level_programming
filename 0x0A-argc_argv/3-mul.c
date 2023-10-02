#include <stdio.h>
#include <stdlib.h>

/**
 * main -  that multiplies two numbers
 * @argc: int
 * @argv: list
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		printf("Error");
		return (1);
	}
	else
	{
		int res = 1;

		for (int i = 1; i < argc; i++)
		{
			res *= strtol(argv[i], NULL, 10);
		}
		printf("%s\n", res);
		return (0);
	}
}
