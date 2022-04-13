#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -prints every minute of the day
 * @n: int value
 * Return: Always 0.
 */
void print_to_98(int n)
{

if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			printf("%d\n", 98);
			n++;
		}
	}

else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			printf("%d\n", n);
			n--;
		}
	}

else if (n == 98)
	{
		printf("%d\n", n);
	}
}
