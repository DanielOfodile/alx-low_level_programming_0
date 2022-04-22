#include "main.h"

/**
<<<<<<< HEAD
 * rev_string - Reserves a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[500];
	
	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		j--;
	}
}

=======
 * rev_string - reverse the given string
 * @s: The string to reverse
 *
 * return: nothing
 */
void rev_string(char *s)
{
	char str[10000];
	int i, r;

	i = 0;
	while (*(s + i) != 0)
	{
	str[i] = *(s + i);
	i++;
	}
	r = i - 1;
	i = 0;
	while (r >= 0)
	{
		*(s + r) = str[i];
		r--;
		i++;
	}
}
>>>>>>> c56b0396eab17b84fe016b745ab07be4026527d6
