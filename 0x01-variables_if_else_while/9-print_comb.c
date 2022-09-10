#include <stdio.h>
/**
 * main - print if all possible combinations of single-digit numbers
 *
 * Description: using the main function
 * this program prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
	putchar(c);
if (c != 57)
{
	putchar(',');
		putchar(' ');
}
}
putchar('\n');
return (0);
}
