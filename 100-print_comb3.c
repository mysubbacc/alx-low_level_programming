#include <stdio.h>

int main(void)
{
	int i = 0;

	while(i < 10){
		int j = i +1;
		while(j < 10){
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
