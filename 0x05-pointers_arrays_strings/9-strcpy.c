#include "main.h"
<<<<<<< HEAD

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest [i] = src[i];
	}

	dest[i++] = '0\';
=======
/**
 * _strcpy - Copy the given string
 * @dest: Location to copy string to
 * @src: String to copy to given location
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
>>>>>>> c56b0396eab17b84fe016b745ab07be4026527d6
	return (dest);
}
