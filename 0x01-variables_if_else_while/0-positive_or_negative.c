#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - this is the main function
 *
 *  Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n=0)	
		printf("is zero");
	
	else if (n>0)
		printf("is postive");
	
	else
		printf("is negative");

	return (0);
}
