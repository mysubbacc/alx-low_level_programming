#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: Pointer to the buffer
 * @size: Size of the buffer
 *
 * The function prints the content of size bytes of the buffer pointed by b.
 * The output should print 10 bytes per line. Each line starts with the
 * position of the first byte of the line in hexadecimal (8 chars), starting
 * with 0. Each line shows the hexadecimal content (2 chars) of the buffer, 2
 * bytes at a time, separated by a space. Each line shows the content of the
 * buffer. If the byte is a printable character, print the letter, if not,
 * print '.'. Each line ends with a new line \n. If size is 0 or less, the
 * output should be a new line only \n.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}


	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
			{
				printf("%02x", (unsigned char)b[j]);
				if (j + 1 < size)
				{
					printf("%02x ", (unsigned char)b[j + 1]);
				}
				else
				{
					printf("   ");
				}
			}
			else
			{
				printf("     ");
			}
		}

		printf(" ");
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
			{
				printf("%c", b[j]);
			}
			else
			{
				printf(".");
			}
		}

		printf("\n");
	}
}
