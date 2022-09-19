#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: An input for a string
 * Return: 0
 */
void puts2(char *str)
{
	int a = 0, b = 0;

	while (str[a] != '\0')
		a++;

	a -= 1;

	for (; b <= a; b += 2)
		_putchar(str[b]);

	_putchar('\n');
}
