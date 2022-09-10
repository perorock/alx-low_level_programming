#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print 0 to 99
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i == 89)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
