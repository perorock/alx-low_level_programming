#include "main.h"
/**
 * print_line - Draws a straight line using the chacter _.
 * @n: The number of _ chacter to be printed
 * Return: 0
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
