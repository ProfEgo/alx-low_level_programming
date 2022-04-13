#include "main.h"

/**
 * print_last_digit - check the code
 * @n: represents the prototype
 * Return: Always 0.
 */

int print_last_digit(int n)
{

int m;

	if (n < 0)
	{
		n = (-1 * (n % 10));
		_putchar(m);
		_putchar('\n');
	}

	else
	{
		m = n % 10;
		_putchar(m);
		_putchar('\n');
	}

return (m);
}
