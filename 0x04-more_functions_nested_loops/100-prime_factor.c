#include "main.h"
#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of a number
 *
 * Return: returns 0
 */
int main(void)
{
	long int max, lower, test;

	max = 612852475143;
	lower = 2;
	test = 2;

	while (max > test)
	{
		if (max % test == 0)
		{
			lower = test;
			max = max / lower;
			test = lower + 1;
		}
		else
			test++;
	}
	printf("%1d\n", max);
	return (0);
}
