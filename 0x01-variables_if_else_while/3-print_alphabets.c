#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print alphabet in lower case and than in UPPER case.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowUp;

	for (lowUp = 'a'; lowUp <= 'z'; lowUp++)
		putchar(lowUp);
	for (lowUp = 'A'; lowUp <= 'Z'; lowUp++)
		putchar(lowUp);
	putchar('\n');

	return (0);
}
