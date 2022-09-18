#include "main.h"

/**
 * print_sign - Entry point
 * Description - Prints a sign along with a certain number
 * if all conditions are true.
 * @n: Int
 * Return: Always 0.
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
