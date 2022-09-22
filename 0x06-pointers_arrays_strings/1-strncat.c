#include "main.h"
/**
 * _strncat - add inputted number of byte to concatenated string
 * @dest: first string
 * @src: second string
 * @n: integer value
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
