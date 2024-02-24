#include <stdio.h>

/**
 * main-add all fibonacci even numbers
 * Retuern: 0
 */

int main(void)
{
	int i;
	unsigned long int a,b,sum;
	a = 0;
	b = 1;
	sum = 0;

	for (i = 0; i < 50; i++)
	{
		unsigned long int j, k, l;


		j = a;
		k = b;
		l = j + k;
		
		if ((l < 4000000) && (l % 2 ==0))
		{
			
			
			sum = sum + l;

		}
		a = k;
		b = l;
	}
	printf("%lu\n", sum);
	return (0);
}




