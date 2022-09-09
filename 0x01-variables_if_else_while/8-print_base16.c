#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * using putchar
 * Return: 0
 */

int main(void)
{
int ch;

for (ch = '0'; ch <= '9'; ch++)
putchar(ch);

for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');

return (0);
}
