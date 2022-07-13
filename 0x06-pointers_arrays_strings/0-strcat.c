#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: A pointer to a character that will be changed
 * @src: A pointeto a character that will also be changed
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
