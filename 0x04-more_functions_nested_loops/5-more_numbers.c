#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int s, k = 0;

	for (; k < 10; k++)
	{
		for (s = 0; s <= 14; s++)
		{
			if (s > 9)
				_putchar(s / 10 + '0');

			_putchar(s % 10 + '0');
		}
		_putchar('\n');
	}
}
