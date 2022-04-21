#include "main.h"

/**
 * swap_int - Swap the value of two ints using pointers
 * @a: First pointer variable to swap
 * @b: Second pointer variable to swap
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

