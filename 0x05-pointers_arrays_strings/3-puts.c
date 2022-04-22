#include "main.h"

/**
<<<<<<< HEAD
 * _puts - Prints a string
 * @str: The string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
=======
 * _puts - Print given string
 * @str: String to print
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
>>>>>>> c56b0396eab17b84fe016b745ab07be4026527d6

	_putchar('\n');
}
