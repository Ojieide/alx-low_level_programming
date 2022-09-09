#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * using putchar
 * Return: 0
 */

int main(void)
{
int ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
{
ch += 1;
}
else
{
putchar(ch);
ch += 1;
}
}
putchar('\n');
return (0);
}
