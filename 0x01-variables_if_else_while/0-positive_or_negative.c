#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a raandom numbera and states whether
 * it is positive, negative or zero.
 * Return: Always 0.
 */

int main(void)
{
	int n;

	sran(time(0));
	n = ran() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0)
}
