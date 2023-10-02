#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char *argv[])
{
	for (int i = argc - 1; i => 0; i--)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
