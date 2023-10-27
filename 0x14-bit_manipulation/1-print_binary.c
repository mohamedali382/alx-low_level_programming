#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: input integer
 * Return: void
*/

void print_binary(unsigned long int n)
{

	int bit = sizeof(n) * 8, print = 0;

	while (bit)
	{
		if (n & 1l << --bit)
		{
			printf("1");
			print++;
		}
		else if (print)
		{
			printf("0");
		}
	}
	if (!print)
	printf("0");

}
