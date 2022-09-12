#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');

	return (0);
}
