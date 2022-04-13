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
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}
