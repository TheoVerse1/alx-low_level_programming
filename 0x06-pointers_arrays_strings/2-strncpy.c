#include "main.h"

/**
 * _strncpy - a function that copies the strings.
 * @dest: an input for a string
 * @src: an input for a string
 * @n: an input for a integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int sl = 0, a = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		sl++;
		src++;
	}

	sl++;

	if (n > sl)
		n = sl;

	src = start;

	for (; a < n; a++)
		*dest++ = *src++;

	return (temp);
}
