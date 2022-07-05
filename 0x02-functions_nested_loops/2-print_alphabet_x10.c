#include "main.h"

/**
 *main - print alphabet_x10
 *description: print lowercase characters
 * Return: Nothing
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */


void print_alphabet_10x(void)
{
	int i;
	char c;
	int alphabet;
	int count;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a';
				alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		count++;
		_putchar('\n');
	}

}
