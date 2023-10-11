#include "3-calc.h"

/**
 * op_add - add two integers
 * op_sub - subtract two integers
 * op_mul - multiple two integers
 * op_div - division two integers
 * op_mod - modules the 1st int by the 2nd int
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: @a + @b
 * return: @a - @b
*/

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
