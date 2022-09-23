#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible different combinations of three digits
 * Numbers must be separated by commas and a space.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * print only the smallest combination of 3 digits.
 * Numbers should be printed in ascending order
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */

int main(void)

{
	int a, b, c;

	a = 0;

	while (a < 100)

	{
		b = a % 10; /* singles digit */

		c = a / 10; /* doubles digit */

		if (c < b)

		{
			putchar(c + '0');

			putchar(b + '0');


			if (a < 89)

			{
				putchar(',');

				putchar(' ');

			}
		}

		a++;
	}

	putchar('\n');

	return (0);
}
