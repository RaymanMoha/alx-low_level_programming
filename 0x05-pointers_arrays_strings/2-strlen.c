#include "main"

/**
 * _strlen - Returns the length of a string.
 * @s: input string.
 * Return: The length of str.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
