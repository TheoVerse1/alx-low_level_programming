#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */

int _isalpha(int c)
{
	char low, up;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == low || c == up)
				return (1);
		}
	}

	return (0);
}
