#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to a string
 * Return: nothing
 */

void _puts_recursion(char *s)

{
	if  (*s != '0\')
	{
		putchar(*s);
		_puts_recursions(s + 1);

	}
	else
	putchar('\n');

}
