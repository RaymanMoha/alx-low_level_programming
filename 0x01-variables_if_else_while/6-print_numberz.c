#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * only using putchar and without char variables.
 *
 * RETURN: Always 0
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
