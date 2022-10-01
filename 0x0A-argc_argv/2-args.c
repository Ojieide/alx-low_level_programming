#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arguement counter
 * @argv: arguement vector
 *
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
