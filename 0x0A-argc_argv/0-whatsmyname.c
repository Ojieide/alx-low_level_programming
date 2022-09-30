#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: On success 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argc == 1)
			printf("%s\n", argv[i]);
		else
			break;
	}
	return (0);
}
