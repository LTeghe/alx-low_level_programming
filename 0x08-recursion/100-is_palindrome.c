#include <stdio>

/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to string
 * Return: length of string
 * */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 *Palidrome_Rsv - checks if two chars of a string are equal
 @s: string to be checked
 @i: fiirst index
 @j: last index
Return: 1 if equal, else 0
*/
int Palidrome_Rsv(har *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] == s[j]);
	if (s[i] != s[j])
		return (0);
	return (Palidrome_Rsv(s, i +1, j - 1));
}
/**
 * is_palidrome - check if a string is a palidrome
 * @s: pointer to string
 * Return: 1 if string palidrome else 0
 * */

int is_palidrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || *s != s[len - 1])
		return (0);

	return (Palidrome_Rsv(s, 0, len - 1));
}
