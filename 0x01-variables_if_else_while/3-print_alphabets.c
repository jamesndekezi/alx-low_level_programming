#include <stdio.h>

/**
 * main -main block
 * Discription: prints the alphabet in lowercase,and then in uppercase
 * use putchar three times in your code
 * Return: 0
 */

int main(void)

{
	char alpha = 'a';

	while (alpha <= 'z')

	{

		putchar(alpha);

		alpha++;

	}

	alpha = 'A';

	while (alpha <= 'Z')

	{

		putchar(alpha);

		alpha++;

	}

	putchar('\n');

	return (0);

}
