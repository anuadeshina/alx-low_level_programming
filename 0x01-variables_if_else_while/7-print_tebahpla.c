#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse
 * Return: Always 0 on success
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
