#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * using putchar
 * Return: 0
 */

int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
