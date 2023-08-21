#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input for a string
 * @src: an input for a string
 * Return: A pointer to the resulting dest
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (a);
}
