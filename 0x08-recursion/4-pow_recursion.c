#include "main.h"

/**
 * _pow_recursion - function that return x to the power y
 * @x: input number
 * @y: input power
 * Return: x to the power y
*/

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}


