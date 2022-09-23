#include <stdio.h>

/**
 * main - main block
 * Description: prints all single digit numbers of base 10 starting from 0
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * You can only use putchar twice in your code
 * Return: 0
 */

int main(void)

{
	int b;

	for (b = 0; b < 10; b++)

	{

		putchar(b + '0');

	}

	putchar('\n');

	return (0);

}
