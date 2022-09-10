#include <stdio.h>

/**
 * main - combination of two digits
 *
 * Return: always o
 */
int main(void)
{
	int val1, val2;

	while (val1 <= 99)
	{
		val2 = val1;
		while (val2 <= 99)
		{
			if (val2 != val1)
			{
				putchar((val1 / 10) + 48);
				putchar((val1 % 10) + 48);
				putchar(' ');
				putchar((val2 / 10) + 48);
				putchar((val2 % 10) + 48);
				if (val1 != 98 || val2 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++val2;
		}
		++val1;
	}
	putchar('\n');
	return (0);
}

