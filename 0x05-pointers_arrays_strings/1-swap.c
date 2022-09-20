#include "main.h"
#include <stdio.h>

/**
 *swap_int - Entry point
 *Description - The function that swaps the value of two integers
 *using the special variable (pointer)
 *Return: void
 *@a: Int
 *@b: Int
 */

void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
