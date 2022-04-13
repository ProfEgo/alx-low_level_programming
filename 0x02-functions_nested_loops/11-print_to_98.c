#include "main.h"

/**
 * print_to_98 -prints every minute of the day
 * @n: int value
 * Return: Always 0.
 */

void print_to_98(int n)
{

	if (n < 98)
		for (n = n; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}

	else if (n == 98)
	{
		for (n = n; n >= 98; n--)
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}

	else
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}

}
