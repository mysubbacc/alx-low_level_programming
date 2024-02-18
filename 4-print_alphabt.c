#include <stdio.h>

int main(void)

{
	char letter = 'a';
	while(letter <= 'z'){
		while(letter != 'e' && letter != 'q') {
			putchar(letter);
			
		}
		letter++;
	}
	putchar('\n');
	return (0);
}

