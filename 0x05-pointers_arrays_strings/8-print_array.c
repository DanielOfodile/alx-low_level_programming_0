#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_array - Prints n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements of the arraay to be printed.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
=======
 * print_array - Print a number of items in an array of integers
 * @a: The array to print
 * @n: The number of items from the array to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
>>>>>>> c56b0396eab17b84fe016b745ab07be4026527d6
}
