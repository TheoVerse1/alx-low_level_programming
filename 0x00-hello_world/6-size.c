#include <stdio.h>

/**
 * main - Prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int s;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", sizeof(s));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
