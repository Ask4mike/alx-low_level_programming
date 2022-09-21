#include "main.h"

/**
 * puts_half - Entry point
 * Description - The function that prints half of a string of characters.
 * @str: pointer to the address of the variable of type char
 */

void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
