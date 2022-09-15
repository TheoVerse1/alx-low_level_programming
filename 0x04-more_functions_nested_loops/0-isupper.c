#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: Input char
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	char i = '0';
	int d = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			d = 1;
			break;
		}
	}

	return (d);
}
