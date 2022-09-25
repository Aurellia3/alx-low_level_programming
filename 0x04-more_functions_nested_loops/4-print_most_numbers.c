#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * Description: This prints numbers except 2 and 4
 *
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i < '9'; i++)
	{
		if ((i == '2') || (i == '4'))
			i++;
		_putchar(i);
	}
	_putchar('\n');
}
