#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: The string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

=======

/**
 * print_rev - Print a string in rev
 * @s: String to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
>>>>>>> c56b0396eab17b84fe016b745ab07be4026527d6
	_putchar('\n');
}
