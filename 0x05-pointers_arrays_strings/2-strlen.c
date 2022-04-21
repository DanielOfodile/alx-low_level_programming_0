#include "main.h"

/**
 * _strlen - Return the length of a given string
 * @s: Pointer to the string
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
	return (c);
}
