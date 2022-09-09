#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n each time it is executed
 * Gets the last digit of n and prints it
 * Return: 0 upon successful execution of the program
 */
int main(void)
{
int n;
int ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ld);
}
else if (ld == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ld);
}
else if (ld < 6 && ld != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
}
return (0);
}
