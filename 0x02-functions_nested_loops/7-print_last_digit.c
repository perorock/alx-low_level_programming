#include "main.h"
/**
 * print_last_digit - function that prints the last digits of a number
 * @t: passed t as an argument into the function
 * Return: 0
 */
int print_last_digit(int t)
{
	int last_digit = t % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
i}
