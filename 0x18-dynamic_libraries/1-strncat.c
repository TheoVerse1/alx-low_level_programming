#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int sl = 0, a = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		sl++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > sl)
		n = sl;

	src = start;

	for (; a < n; a++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
