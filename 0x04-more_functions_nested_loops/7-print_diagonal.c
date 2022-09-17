#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ chacter
 * @n: The number of \ chacrter to be printed
 * Return void
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (i == j)
			{
				_putchar('\\');
				break;
			}
			_putchar(' ');
		}
		if (i != n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
