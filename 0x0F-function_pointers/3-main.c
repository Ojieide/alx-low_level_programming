#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of simple operations
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	i = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(i) == NULL || i[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*i == '/' && num2 == 0) ||
	    (*i == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(i)(num1, num2));

	return (0);
}
