#include "main.h"
#include <stdio.h>

/**
 * _abs - Absolute value
 * @r: Entry value
 * Description: _islower print lowercase alphabet
 * Descript: intergral 'c'
 * Return: 0
 */

int _abs(int r)
{

if (r < 0)
{
_putchar(r * (-1));
}

else if (r == 0)
{
_putchar(0);
}

else
{
_putchar(r);
}
return (0);
}
