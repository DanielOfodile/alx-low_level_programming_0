#include "main.h"

/**
<<<<<<< HEAD
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
=======
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

>>>>>>> c56b0396eab17b84fe016b745ab07be4026527d6
