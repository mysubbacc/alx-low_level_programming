#include <stdio.h>

int main(void)
{
	int letnum = 0;
	while(letnum < 10) {
		putchar(letnum + '0');
		letnum++;
	}
	putchar('\n');
	return (0);
}
