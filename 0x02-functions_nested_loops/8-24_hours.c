#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
int m;
int num2;
int num3;
int num4;
int num5;

for (m = '0'; m < 1440; m++)
{
	for (num2 = 0; num2 <= 2; num2++)
	{
		for (num3 = 0; num3 <= 3; num3++)
		{
			for (num4 = 0; num4 <= 5; num4++)
			{
				for (num5 = 0; num5 <= 9; num5++)
				{
					_putchar(num2 + '0');
					_putchar(num3 + '0');
					_putchar(':');
					_putchar(num4 + '0');
					_putchar(num5 + '0');
				}
			}
		}
	}
_putchar('\n');
}
}
