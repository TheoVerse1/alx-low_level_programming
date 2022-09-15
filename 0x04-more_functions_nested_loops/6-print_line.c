#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: Input for an 1 integer
 * Return: 0
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		for (; a < n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
