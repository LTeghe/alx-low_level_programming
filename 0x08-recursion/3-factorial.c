#include <stdio.h>

/**
 * factorial - returns factorial
 * @n: Factorial integer
 * Return: Factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
			return (1);
		else if (n == 1)
			return (1);
		return (factorial(n - 1) * n);
	}
}
