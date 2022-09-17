#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ chacter
 * @n: The number of \ chacrter to be printed
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				putchar(' ');
			putchar('\\');
			if (len == (n - 1))
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}
