#include <stdio.h>

int main(void)
{
	char better = 'z';
	while(better >= 'a') {
		putchar(better);
		better--;
	}
	putchar('\n');
	return (0);
}
