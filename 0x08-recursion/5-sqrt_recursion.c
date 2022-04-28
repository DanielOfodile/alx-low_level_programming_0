#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - natural squareroot of a number.
 * @n: number to find the square root.
 * Return: square root or -1 if n < 0.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural sqaure root of a number.
 * @n: number to calculate the sqaure root.
 * @i: iterate number.
 *
 * Return: the natural sqaureroot.
 */
int _sqrt(int n, int i)
{
	int sqrt  = i * i;

	if (sqrt < n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
