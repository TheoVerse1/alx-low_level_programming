#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print alphabet followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowAlpha;

	for (lowAlpha = 'a'; lowAlpha <= 'z'; lowAlpha++)
	{
		if (lowAlpha != 'e' && lowAlpha != 'q')
		{
			putchar(lowAlpha);
		}
	}
	putchar('\n');

	return (0);
}
