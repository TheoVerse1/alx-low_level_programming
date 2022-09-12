#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Write a program that prints single digit numbers of base 10 starting 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
