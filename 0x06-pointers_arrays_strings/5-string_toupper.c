#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: addresss to the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && <= 'z')
			str[i] -= 32;

		i++;
	}
	return (str);
}
