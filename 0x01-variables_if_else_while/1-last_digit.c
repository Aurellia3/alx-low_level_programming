#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if assigned a random number to the variable n
 *
 * Description: using the main function
 * this program prints a random number to the variable n
 * Return: 0
 */
int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (1 > 5)
{
	printf("Last digit of %d is %8d and is greater than 5\n", n, 1);
}
else if (1 == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, 1);
}
else
{
	printf("Last digit of %d is %-8d and is less than 6 and not 0\n", n, 1);
}
return (0);
}