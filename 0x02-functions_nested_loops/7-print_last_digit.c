#include "main.h"

/**
 * print_last_digit: prints the last digit of a number.
 * @n: is the int thst will be used for the argument of the function
 * Return: integer value
 */

int print-last_digit(int n)
{
	int last;
	
	last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
