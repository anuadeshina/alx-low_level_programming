#include <stdio.h>

/**
 * main - prints the single digit numbers of base 10 starting from 0
 * Return: Always 0 on success
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
