#include "main.h"

/**
 * _puts - Entry point
 * Description - A function that prints a string with a new
 * a new line to stdout
 * str: a pointer that is of the char type.
 */

void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');	
}
