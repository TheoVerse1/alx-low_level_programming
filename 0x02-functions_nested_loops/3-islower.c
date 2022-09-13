#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: int for input of an integer
 *
 * Return: 0
 */

int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			low = 1;
	}

	return (low);
}
