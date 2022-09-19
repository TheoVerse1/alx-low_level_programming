#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse,
 * followed by a new line.
 * @s: An input for a string
 * Return: 0
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	while (a)
		_putchar(s[--a]);

	_putchar('\n');
}
