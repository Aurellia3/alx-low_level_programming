#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name followed by a new line
 * @argc: argument that contains argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
