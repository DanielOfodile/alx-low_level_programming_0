#include "main.h"

/**
 * print-alphabet_x10 - prints alphabet 10 times.
 * 
 * return: void.
 */

void print_alphabet_x10(void)
{
	char c;
	int i= 0;
	while (i < 10)
	{
		c = 'a';
		whiel (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}