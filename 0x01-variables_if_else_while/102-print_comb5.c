#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers ranging
 * from 0 to 99. The two numbers should be seperated by a space.
 * the combination of numbers must be seperated by comma.
 *
 * Return: Always 0 on success
 */

int main(void)

{
	int i, p;

	for (i = 0; i < 100; i++)
	{
		for (p = 0; p < 100; p++)
		{
			if (p > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
				if (i != 98)
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
