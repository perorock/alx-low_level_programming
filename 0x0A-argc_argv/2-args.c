#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 *  @argc: Count arguments
 *  @argv: Arguments
 *  Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
