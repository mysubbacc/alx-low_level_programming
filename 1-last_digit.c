#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int norem = n % 10;
	if(norem > 5)
		printf("Last digit of n %d is %d and is greater than 5" n norem);
	else if(norem == 0)
		printf("Last digit of %d is %d and is 0", n, norem);
	else if(norem < 6 && norem != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, norem);
	printf("\n")

	return (0);
}
