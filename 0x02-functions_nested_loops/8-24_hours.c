#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{

long num2;
long num3;
long num4;
long num5;



for (num2 = '0'; num2 <= '2'; num2++)
{
	for (num3 = '0'; num3 <= '3'; num3++)
	{
		for (num4 = '0'; num4 <= '5'; num4++)
		{
			for (num5 = '0'; num5 <= '9'; num5++)
			{
			_putchar(num2);
			_putchar(num3);
			_putchar(':');
			_putchar(num4);
			_putchar(num5);
			_putchar('\n');
			}

		}
	}
}

}
