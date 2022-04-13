#include "main.h"

/**
 * print_sign - combination of sign aand values
 * @n: contains value to be compared
 * Return: Always 0.
 */

int print_sign(int n)

{

if (n > 0)
{
return (1);
_putchar('+');
_putchar('\n');
}

else if (n == 0)
{
return (0);
_putchar(0);
_putchar('\n');
}

else
{
return (-1);
_putchar('-');
_putchar('\n');
}

}
