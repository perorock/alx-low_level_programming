#include "main.h"
#include <stdio.h>
/**
 * _abs - computes absolute value of an integer
 * @t: paased as argument into the function
 * Return: 0
 */
int _abs(int t)
{
	if (t > 0 || t == 0)
	{
		return (t);
	}
	else
		return (t * -1);
}
