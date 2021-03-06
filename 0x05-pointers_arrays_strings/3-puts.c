#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 * Return: no return
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(str[count]);
		count++;
	}
}
