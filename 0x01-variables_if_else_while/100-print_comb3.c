#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits which must be
 * different from each other, printed in ascending order and seperated by
 * commas followed by a space.
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > i)
			{
				putchar(i + '0');

				putchar(j + '0');

				if (i != 8)
				{
					putchar(',');

					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
