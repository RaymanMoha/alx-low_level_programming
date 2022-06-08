#include "main.h"
#include <stdio.h>


/**
 * main - Entry point
 * print_alphabet_x10 - function name
 * declaration - print out alphabets 10 times
 *
 * Return: Always 0.
 *
 */

int main(void)

{
	int alphabet;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
	return (0);
}
