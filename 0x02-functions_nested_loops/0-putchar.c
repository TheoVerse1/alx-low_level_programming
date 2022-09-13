#include <unistd.h>
#include "main.h"

/**
 * main - Prints the word _putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char output[8] = "_putchar";
	int i;

	for(i = 0; i < 9; i++)
		_putchar(output[i]);
	_putchar('\n');

	return (0);
}
