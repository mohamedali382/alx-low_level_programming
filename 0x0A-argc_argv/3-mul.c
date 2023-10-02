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
	else if (argc == 3)
	{
		int res;

		res = atoi(argv[1]) * atoi(argv[2]);

		printf("%s\n", res);
		return (0);
	}
}
