#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 * Return: no return
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
