#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		for (j = i; j > 0; j--)
			_putchar('#');
		_putchar('\n')
	}
	if (size < 1)
		_putchar('\n');
}
