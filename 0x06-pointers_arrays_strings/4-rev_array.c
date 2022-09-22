#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: an input for a Array
 * @n: number of elements of array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int ab;

	while (i < n--)
	{
		ab = a[i];
		a[i++] = a[n];
		a[n] = ab;
	}
}
