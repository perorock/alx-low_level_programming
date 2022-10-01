#include "main.h"
/**
 * _strcmp - Function to compare two strings
 * @s1: the first character
 * @s2: the second character
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
