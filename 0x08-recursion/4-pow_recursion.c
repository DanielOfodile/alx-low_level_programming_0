#include "main.h"

/**
 * _pow_recursion - computes the power of two integers.
 * @x: The base integer.
 * @y: The index integer.
 * Return: Returns the power or -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	int power;
	power = x ^ y;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (power);
	}
}
