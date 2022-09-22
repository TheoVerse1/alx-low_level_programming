#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, dest_i = 0;

	while (dest[i++])
		dest_i++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_i++] = src[i];

	return (dest);
}
