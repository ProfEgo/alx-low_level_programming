#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/completed)
 */
int main(void)

{
int number_left;
int number_right;


for (number_left = 44; number_right <= 79; number_left++)
{
for (number_right = number_left + 1 ; number_right <= 79; number_right++)
{

putchar(number_left);
putchar(number_right);


if ((number_left == 58) && (number_right == 79))
{
break;
}

putchar(',');
putchar (' ');

}

}

putchar('\n');


return (0);


}
