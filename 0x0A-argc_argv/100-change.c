#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: int
 * @argv: list
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, least = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				least += money / cents[i];
				money %= cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
