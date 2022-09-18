#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry point
 * @c: integer
 * description : computes absolute integer
 *
 * Return: Always 0.
 */

int _abs(int c)
{
	if (c > 0)
	{
		c = +c;
	}
	else
	{
		c = -c;
	}
	return (c);
}
