#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{

int num1;
int num2;
int num3;
int num4;
int num5;


for (num1 = 0; num1 <= 1440; num1++)
{
	for (num2 = 0; num2 < 3; num2++)
	{
		for (num3 = 0; num3 < 4; num3++)
		{
			for (num4 = 0; num4 < 6; num4++)
			{
				for (num5 = 0; num5 < 9; num5++)
				{
				_putchar(num5 + '0');
				}
			_putchar(num4 + '0');
			}
		_putchar(num3 + '0');
		_putchar(':');
		}
	_putchar(num2 + '0');
	}
_putchar('\n');
}

}
