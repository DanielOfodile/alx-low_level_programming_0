#include "main.h"

/**
<<<<<<< HEAD
 * puts_half - prints half of a string
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}

	for (; k < j; k++)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}


=======
 * puts_half - Print the second half of a string
 * @str: Given string to print half of
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, h;

	i = h = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	if (i % 2 == 0)
		i /= 2;
	else
	{
		h = (i - 1) / 2;
		i -= h;
	}
	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
>>>>>>> c56b0396eab17b84fe016b745ab07be4026527d6
