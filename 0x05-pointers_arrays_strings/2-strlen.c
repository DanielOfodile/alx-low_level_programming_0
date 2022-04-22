#include "main.h"

/**
<<<<<<< HEAD
 * _strlen - Returns the length of a string
 * @s: string to count
=======
 * _strlen - Return the length of a given string
 * @s: Pointer to the string
>>>>>>> c56b0396eab17b84fe016b745ab07be4026527d6
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
<<<<<<< HEAD

=======
>>>>>>> c56b0396eab17b84fe016b745ab07be4026527d6
	return (c);
}
