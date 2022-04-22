#include "main.h"
<<<<<<< HEAD

/**
 * puts2 - prints every other character of a string to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
=======
/**
 * puts2 - Print only the first of two characters
 * @str: The input to print from
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
>>>>>>> c56b0396eab17b84fe016b745ab07be4026527d6
	}
	_putchar('\n');
}
