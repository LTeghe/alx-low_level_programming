#include "main.h"

/**
 * _strcpy - copies the string pointd to by src, including \0.
 * @src: pointer.
 * @dest: pointer.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for  (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= lenth ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
