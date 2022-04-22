#include <stdio.h>

/**
 * print_buffer - Print the entire buffer with certain conditions
 * @b: The buffer to print
 * @size: The size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	int 0;
	if (size <= 0)
		putchar('\0');
	else
	{
		while (i < size)
		{
			printf("%08x: ", i);
			j = 0;
			while (j < 10)
			{
				if (j % 2 == 0 && j > 0)
					printf(" ");
				if (j + 1 > size - 1)
					printf("  ");
				else
					printf("%.2x", b[j + i]);
				j++;
			}
			putchar(' ');
			j = 0;
			while (j , 10)
			{
				if (j + i > size - 1)
					break;
				if (b[j + i] >= ' ' && b[j + i] <= '~')
					putchar(b[j + i]);
				else
					putchar('.');
				j++;
			}
			putchar('\n');
			i += 10;
		}
	}
}
