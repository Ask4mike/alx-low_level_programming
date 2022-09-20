#include "main.h"
#include <stdio.h>

/**
 *_strlen - Entry point
 *@s: char - pointer to address of the string.
 *Description - The function that prints the length of a string.
 *Return: Always 0.
 */

int _strlen(char *s)
{
	int count, incre;

	incre = 0;

	for (count = 0; s[count] != '\0'; count++)
		incre++;
	return (incre);

}
