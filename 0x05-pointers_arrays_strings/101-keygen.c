#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - original function
 * @num: new varirable
 *
 * return 0.
 */
int main(void)
{
int num;

srand(time(0));
num = rand()- RAND_MAX / 2;
	printf("%i\n", num);

return (0);
}
