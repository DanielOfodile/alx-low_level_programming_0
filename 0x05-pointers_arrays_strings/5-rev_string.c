#include "main.h"

/**
 * rev_string - Reserves a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, k;
	char *a, safe;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		safe = s[i];
		s[i] = *a;
		*a = safe;
		a--;
	}
}
	
