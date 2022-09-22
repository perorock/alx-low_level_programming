#include "main.h"
/**
 * strcat - use concatenation to join strings
 *
 * @dest: pointr to the string to be concatenate
 * @src: source string
 * Return: A pointer to the destination
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
} 
