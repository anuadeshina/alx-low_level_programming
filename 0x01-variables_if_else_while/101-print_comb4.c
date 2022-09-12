#include <stdio.h>

/**
 * main - Prints all possible different combinationsof three digits,
 * the three digits must be different, numbers should be printed in ascending
 * order with three digits, and must be seperated by commas followed by space.
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int i, p, m;

	for (i = 0; i <= 9; i++)
	{
		for (p =1; p <= 9; p++)
		{
			for (m = 2; m <= 9; m++)
			{
				if (m > p && p > i)
				{
					putchar(i + '0');
					putchar(p + '0');
					putchar(m + '0');
						if (i != 7)
						{
							putchar(',');
							putchar(' ');
						}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
