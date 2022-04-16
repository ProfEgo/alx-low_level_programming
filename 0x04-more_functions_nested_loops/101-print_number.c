#include "main.h"
/**
 *print_number - that prints an integer
 *@n: print int
 *
 *Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');

}
