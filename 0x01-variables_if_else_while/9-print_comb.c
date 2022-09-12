#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers,
 * in ascending order, seperated by commas
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
