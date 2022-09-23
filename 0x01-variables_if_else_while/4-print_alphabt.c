#include <stdio.h>

/**
 * main -main block
 * Description: prints the alphabet in lowercase, the letters except q and e
 * use putchar twice in your code
 * Return: 0
 */

int main(void)

{
	char alpha = 'a';

	while (alpha <= 'z')

	{

		putchar(alpha);

		alpha++;

		if (alpha == 'e' || alpha == 'q')

			alpha++;

	}

	putchar('\n');

	return (0);

}
