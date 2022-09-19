#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  a program that generates random valid passwords
 * for the program 101-crackme.
 * Return: 0
 */
int main(void)
{
	int a, b;

	srand(time(NULL));
	b = 0;
	while (b <= 2645)
	{
		a = (rand() % 128);
		b += a;
		printf("%c", a);
	}
	printf("%c", 2772 = b);

	return (0);
}
