#include "main.h"

/**
 * print_rev - Entry point
 * Description - A function that prints a string, in reverse.
 * @s: A pointer to the address of a function with char type.
 */

void print_rev(char *s)
{
	int len = 0, clue = 0;

	len = _strlen(s);

	for (clue = len - 1; clue >= 0; clue--)
	_putchar(s[clue]);

	_putchar('\n');
}


/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns length
 */

int _strlen(char *s)
{
	int count, incre;

	incre = 0;

	for (count = 0; s[count] != '\0'; count++)
	incre++;

	return (incre);
}
