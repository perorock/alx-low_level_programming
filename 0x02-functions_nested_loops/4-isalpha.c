#include "main.h"
/**
 * _isalpha - to check if letter c is in lowercase or uppercase
 * @c: pass the argu,ment int c into the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
