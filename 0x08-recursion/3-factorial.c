#include "main.h"
/**
 * factorial(int n) - returns the factorial of a given number
 * @n: pointer block of memory to be filled
 * @Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
