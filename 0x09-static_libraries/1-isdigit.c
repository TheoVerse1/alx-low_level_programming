#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: Input for an integer
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	char i = '0';
	int s = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			s = 1;
			break;
		}
	}

	return (s);
}
