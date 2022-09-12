#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Alpha;

	for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
	{
	putchar(Alpha);
	}
	for (Alpha = 'A'; Alpha <= 'Z'; Alpha++)
	{
	putchar(Alpha);
	}
	{
	putchar('\n');
	}
	return (0);
}
