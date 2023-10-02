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
	if (argc == 3)
	{
		int res;

		res = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", res);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
