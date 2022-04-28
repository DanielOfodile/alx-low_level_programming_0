#include "main.h"

/**
 * _sqrt_recursion - natural squareroot of a number.
 * @n: number to find the square root.
 * Return: square root or -1 if n < 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursion(n));
}
