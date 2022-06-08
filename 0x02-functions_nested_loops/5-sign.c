#include <stdio.h>
#include "main"

/**
 * print_sign - print sign of n
 *
 * @n: int
 *
 * description : return sign according to condition
 *
 * Return:+ if positive, 0 if zero and - if negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');

		return (1);

	}

	else if (n < 0)
	{
		_putchar ('-');
		_putchar (-1);

		return (0);

	}

	else
	{
		_putchar (0);

		return (0);

	}
}

