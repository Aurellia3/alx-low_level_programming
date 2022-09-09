#include <stdio.h>
/**
 * main - print if alphabets are in lowercase then in uppercase
 *
 * Description: using the main function
 * this program prints alphabets in lowercase then in uppercase
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
