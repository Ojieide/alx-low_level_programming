#include <stdio.h>
#include <unistd.h>
/**
 * main - to start and end the program
 * void: an empty data type that has no return value
 * Return: 1 means the program did not execute successfully
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
return (1);
}
