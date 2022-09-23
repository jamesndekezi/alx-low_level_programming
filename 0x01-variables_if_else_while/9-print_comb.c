#include <stdio.h>

/**
 * main - main block
 * Description: prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * you can only use putchar four times maximum in your code
 * Return: 0
 */

int main(void)

{
	int b = 0;

	while (b < 10)

	{

		putchar(b + '0');

		if (b < 9)

		{

			putchar(',');

			putchar(' ');

		}

		b++;

	}

	putchar('\n');



	return (0);

}
