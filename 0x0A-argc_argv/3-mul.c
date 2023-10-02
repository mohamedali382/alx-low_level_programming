#include <stdio.h>

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
			res *= argv[i];
		}
		printf("%s\n", res);
		return (0);
	}
}
