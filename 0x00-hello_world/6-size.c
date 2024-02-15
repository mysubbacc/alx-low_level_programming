#include<stdio.h>

/**
  * main- prints size of different type
  * Returns: returns 0
  */

int main(void)
{
	printf("Size of int: %d bytes\n", sizeof(int));
	printf("Size of float: %d bytes\n", sizeof(float));
	printf("Size of double: %d bytes\n", sizeof(double));
	printf("Size of char: %d byte\n", sizeof(char));
	printf("size of long int: %d bytes\n", sizeof(long int));
	printf("size of long long int: %d bytes\n", sizeof(long long int));

	return (0);
}
