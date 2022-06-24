#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
 *  * _islower - function that checks for a lowercase character.
 *   *
 *    * @c: character to test.
 *     *
 *      * Return: Always 0 (Success)
 *       *
 *       */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
			return (1);
	else
			return (0);
}

/**
 *  * _isalpha - the function that checks for alphabetic characters.
 *   *
 *    * @c: the character that the function will check
 *     *
 *      * Return: Always 0 (Success)
 *       *
 *       */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return (1);
	else
			return (0);
}

/**
 *  * _abs - function that prints the absolute value of a number.
 *   *
 *    * @a: the number whose absolute value is tested
 *     *
 *      * Return: absolute value of a number
 *       *
 *       */
int _abs(int a)
{

	if (a < 0)
	{
			a = a * -1;
	}

	return (a);
}

/**
 *  * _isupper - define if a character is uppercase
 *   *
 *    * Description: Prints the alphabet with _putchar
 *     * @c: charater
 *      * Return: void
 *       */

int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
					return (1);
			else
						return (0);
}

/**
 *  * _isdigit - input
 *   *
 *    * Description: define if a character is a number
 *     * @c: charater
 *      * Return: 1 yes 0 no
 *       */

int _isdigit(int c)
{
		if (c >= '0' && c <= '9')
					return (1);
			else
						return (0);
}

/**
 *  * _strlen - function that returns the length of a string.
 *   *
 *    * @s: string whose length is to be returned.
 *     *
 *      * Return: length of the string.
 *       *
 *       */

int _strlen(char *s)
{
		int length = 0;

			while (*s != '\0')
					{
								s++;
										length++;
											}

				return (length);

}

/**
 *  * _puts - a function that prints a string, followed by a new line stdout.
 *   *
 *    * @str: the string to be manipulated.
 *     *
 *      * Return: void
 *       *
 *       */

void _puts(char *str)
{
		while (*str != '\0')
				{
							_putchar(*str);
									str++;
										}
			_putchar('\n');
}

/**
 *  * *_strcpy - function that copies a string to another string
 *   * @dest: a pointer
 *    * @src: another pointer
 *     * Return: value stored in dest
 *      */

char *_strcpy(char *dest, char *src)
{
		int i;

			for (i = 0; src[i] != '\0'; i++)
					{
								dest[i] = src[i];
									}
				dest[i] = '\0';
					return (dest);
}

/**
 *  * _atoi - function that converts a string to an integer
 *   * @s: pointer
 *    *
 *     * Return: int.
 *      */
int _atoi(char *s)
{
		int i;
			int res = 0;
				int sig = -1;
					int brk = 0;

						for (i = 0; s[i] != '\0'; i++)
								{
											if (s[i] == '-')
															sig = sig * -1;
													if (s[i] >= '0' && s[i] <= '9')
																{
																				res = res * 10;
																							res -= (s[i] - '0');
																										brk = 1;
																												}
															else if (brk == 1)
																			break;
																}
							res = sig * res;
								return (res);
}

/**
 *  * *_strcat - a function that concatenates two strings.
 *   *
 *    * @dest: string to be concatenated.
 *     *
 *      * @src: string to concatenate.
 *       *
 *        * Return: the concatenated string.
 *         *
 *         */

char *_strcat(char *dest, char *src)
{
		int i, j;

			for (i = 0; dest[i]!='\0'; i++);

				for (j = 0; src[j]!='\0'; j++, i++)
					  	{
							  		dest[i] = src[j];
									  	}
					dest[i] = '\0';

						return (dest);
}

/**
 *  * *_strncat - a function that concatenates two strings, using
 *   * at most n bytes.
 *    *
 *     * @dest: the first string.
 *      * @src: the second string to be appended to dest.
 *       * @n: max number of bytes to append.
 *        *
 *         * Return: the resultant string(dest).
 *          *
 *          */

char *_strncat(char *dest, char *src, int n)
{
		int i, j;

			i = j = 0;
				while (*(dest + i))
							i++;
					while (j < n && *(src + j))
							{
										*(dest + i) = *(src + j);
												i++;
														j++;
															}

						if (j < n)
									*(dest + i) = *(src + j);

							return (dest);
}

/**
 *  * _strncpy - a function that copies a string (src) to another
 *   * string (dest).
 *    *
 *     * @src: string to copy
 *      * @dest: string to copy src to.
 *       * @n: bytes ofthe string src to copy
 *        *
 *         * Return: dest
 *          *
 *          */

char *_strncpy(char *dest, char *src, int n)
{
		int j;

			j = 0;
				while (j < n && *(src + j))
						{
									*(dest + j) = *(src + j);
											j++;
												}
					while (j < n)
							{
										*(dest + j) = '\0';
												j++;
													}
						return (dest);
}

/**
 *  * _strcmp - a function that compares two strings
 *   *
 *    * @s1: the first string
 *     *
 *      * @s2: the second string
 *       *
 *        * Return: the difference between the two strings, if any.
 *        */

int _strcmp(char *s1, char *s2)
{
		int a = 0;

			while (*(s1 + a) && *(s2 + a) && (*(s1 + a) == *(s2 + a)))
						a++;
				return (*(s1 + a) - *(s2 + a));
}

/**
 *  * _memset - function that fills the first n bytes of memory
 *   * area pointed to by s.
 *    *
 *     * @s: the memory space to be filled
 *      * @b: number of bytes to fill s with
 *       * @n: number of spaces to fill
 *        *
 *         * Return: the pointer (s)
 *         */

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int j;

			for (j = 0; j < n; j++)
					{
								*(s + j) = b;
									}

				return (s);

}

/**
 *  * _memcpy - a function that copies n bytes from src to dest
 *   *
 *    * @dest: memory area to copy bytes to
 *     * @src: memory area  to copy n bytes from
 *      * @n: number of bytes to copy
 *       *
 *        * Return: the pointer to dest (dest)
 *        */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int j;

			for (j = 0; j < n; j++)
					{
								*(dest + j) = *(src + j);
									}

				return (dest);
}

/**
 *  * _strchr - a function that locates a character in a string
 *   * @s: the string to be located
 *    * @c: the character to be located within a string
 *     * Return: the address of the located character (c) or NULL
 *      *
 *       */

char *_strchr(char *s, char c)
{
		int j;

			for (j = 0; *s; j++)
					{
								if (*s == c)
												return (s);
										s++;
											}

				if (c == *s)
							return (s);
					return (NULL);
}

/**
 *  * _strspn - function that computes the length of the substring
 *   * of a string.
 *    *
 *     * @s: the subject/input string
 *      * @accept: pointer to the computed bytes from string s.
 *       *
 *        * Return: the computed length of s in bytes (compute)
 *         *
 *         */

unsigned int _strspn(char *s, char *accept)
{
		unsigned int a, b;

			for (a = 0; s[a]; a++)
					{
								for (b = 0; accept[b]; b++)
											{
															if (s[a] == accept[b])
																				break;
																	}

										if (!accept[b])
														break;
											}
				return (a);

}

/**
 *  * _strpbrk - function that searches the first character in a string
 *   * that matches any characters sepcified in the second srting.
 *    *
 *     * @s: the subject or input string/ string to be scanned.
 *      * @accept: string that has the characters to be matched.
 *       *
 *        * Return: a pointer to the character in the first string that matches
 *         * one of the characters in the first string.
 *          *
 *          */

char *_strpbrk(char *s, char *accept)
{
		unsigned int a, b;

			for (a = 0; s[a]; a++)
					{
								for (b = 0; accept[b]; b++)
											{
															if (s[a] == accept[b])
																				break;
																	}
										if (accept[b])
														return (s + a);
											}
				return (NULL);
}

/**
 *  * _strstr - function that finds the first occurrence of the substring
 *   * needle in the string haystack.
 *    *
 *     * @haystack: the input/subject string.
 *      * @needle: the substring to be located
 *       *
 *        * Return: a pointer to the beginning of the located of the the string
 *         * needle or NULL if needle is not found.
 *          *
 *          */

char *_strstr(char *haystack, char *needle)
{
		int a = 0, b = 0;

			while (haystack[a])
					{
								while (needle[b] && (haystack[a] == needle[0]))
											{
															if (haystack[a + b] == needle[b])
																				b++;
																		else
																							break;
																				}

										if (needle[b])
													{
																	a++;
																				b = 0;
																						}

												else
																return (haystack + a);
													}
				return (NULL);
}

