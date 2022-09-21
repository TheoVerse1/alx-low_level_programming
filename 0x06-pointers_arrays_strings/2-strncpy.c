#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input for a string
 * @src: an input for a string
 * @n: an input for an integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int sr = 0, a = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		sr++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > sr)
		n = srclen;

	src = start;

	for (; a < n; a++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
