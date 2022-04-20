#include "main.h"

/**
 * swap_int - swaps the value of two integer
 * @a: interger to swap
 * @b: integer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int daniel;

	daniel = *a;
	*a = *b;
	*b = daniel;
}
