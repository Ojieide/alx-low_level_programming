#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers, followed by a new line
 * @argc: arguement counter
 * @argv: arguement vector
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int i, j, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	res = i * j;

	printf("%d\n", res);

	return (0);
}
