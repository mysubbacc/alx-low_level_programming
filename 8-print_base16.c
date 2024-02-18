#include <stdio.h>

int main(void)
{
	int nomr = 0;
	char albert = 'a';
	while(nomr < 10) {
		putchar(nomr + '0');
		nomr++;
	}
	while(albert <= 'f') {
		putchar(albert);
		albert++;
	}
	putchar('\n');
	return (0);
}
