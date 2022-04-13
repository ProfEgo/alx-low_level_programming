#include "main.h"

/**
 * print_last_digit - check the code
 * @n: represents the prototype
 * Return: Always 0.
 */

int print_last_digit(int n)
{

if (n < 0)
{
n = (-1 * (n % 10));
_putchar(n + '0');
_putchar('\n');
return (n);
}

else
{
n = n % 10;
_putchar(n + '0');
_putchar('\n');
return (n);
}	

}
