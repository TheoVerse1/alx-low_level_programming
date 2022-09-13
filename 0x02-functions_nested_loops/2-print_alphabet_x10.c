#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char f;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (f =  'a'; f <= 'z'; f++)
			_putchar(f);
		_putchar('\n');
	}
}
