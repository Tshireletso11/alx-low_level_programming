#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: Destination buffer to copy to.
 * @src: Source string to copy from.
 *
 * Return: A pointer to the destination string `dest`.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
