#include <stdio.h>

/*
 * main - print the size of various types 
 *
 * Description: I will use the main function
 *
 * Return: Always 0
 */

int main(void)
{
	char c:
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
