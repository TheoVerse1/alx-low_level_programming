#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, i;

	for (a = '0'; a < '9'; a++)
	{
		for (i = a + 1; i <= '9'; i++)
		{
			if (i != a)
			{
				putchar(a);
				putchar(i);

				if (a == '8' && i == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
