#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: 0
 */

void times_table(void)
{
	int e, d, c;

	for (e = 0; e <= 9; e++)
	{
		for (d = 0; d <= 9; d++)
		{
			c = e * d;

			if ((c / 10) == 0)
			{
				if (d != 0)
					_putchar(' ');
				_putchar(c + '0');

				if (d == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (d == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
