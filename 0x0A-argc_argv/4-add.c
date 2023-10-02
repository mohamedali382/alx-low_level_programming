#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: int
 * @argv: list
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int sum = 0, c = 0;

	for (int i = 0; i < argc; i++)
	{
		sum += atol(argv[i]);
		if (argv[i] >= "a" || argv[i] <= "z")
			c++;
	}

	if (c > 0)
	{
		printf("Error");
		return (1);
	}
	else if (argc == 0)
	{
		printf("0");
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
