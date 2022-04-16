#include "main.h"
/**
 *print_number - that prints an integer
 *@n: print int
 *
 *Return: Always 0.
 */
void print_number(int n)
{

long m = n * -1;
long c = m % 10;
long p = m / 10;

	if (n < 0)
	{
		_putchar('-');
		_putchar(p + '0');
		_putchar(c + '0');
	}

	if (n >= 0 || n <= 9)
	{
		_putchar(n + '0');
	}
	if (n > 9)
	{
		_putchar(p + '0');
		_putchar(c + '0');
	}

}
