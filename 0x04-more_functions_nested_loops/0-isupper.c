#include "main.h"
#include <stdio.h>

/**
 * _isupper - A function that checks for uppercase character
 * @c: An input for an integer
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
