#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
