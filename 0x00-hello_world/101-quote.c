#include <unistd.h>
/**
 * main - print quote text
 * Description: prints Doras's quote
 * ssize_t write(int fd, const void *buf, size_t count);
 * Return: Always 1 (Success)
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
		write(1, quo, 59);
			return (1);
}

