#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * Of a string to uppercase.
 * @str: The string to be changed.
 * Return: A pointer to be the changed string.
 *
 */
char *string_toupper(char *str)

{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
