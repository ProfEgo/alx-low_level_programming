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
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d", 98);
}

else
{
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("%d", 98);
}

}
