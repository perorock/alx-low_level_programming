#include "main.h"
/**
 * _strncpy - function to copy string
 * @dest: first character
 * @src: second character
 * @n: the integer
 *
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
