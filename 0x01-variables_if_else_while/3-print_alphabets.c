#include <stdio.h>
#include <ctype.h>
/**
 * main - all codes
 * Description:A program that prints alphabets in lowercase followed by a line
 *
 * Return: 0
 *
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	for (alphabets = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
