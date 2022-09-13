#include "main.h"

/**
 * print_alphabet - print characters a to z in lower case
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	{
		_putchar(v);
	}
	_putchar('\n');
}
