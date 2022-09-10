#include <stdio.h>

/**
 * main - combination of two digits
 *
 * Return: always o
 */
int main(void)
{
	int val1, val2;

	for (val1 = 0; val1 < 9; val1++)
	{
		for (val2 = val1 + 1; val2 < 10; val2++)
		{
			putchar((val1 % 10) + '0');
			putchar((val2 % 10) + '0');
			if (val1 == 8 && val2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
