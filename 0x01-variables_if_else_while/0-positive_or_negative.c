#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main Entery point
 *
 *return always O (successfully/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("The number %d is positive\n", n);
	}


	else if (n == 0)
	{
		printf("The number %d is zero\n", n);
	}

	else
	{
		printf("The number %d is negative\n", n);
	}

	return (0);
}
