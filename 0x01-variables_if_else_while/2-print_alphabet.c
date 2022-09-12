#include <stdio.h>

/**
 * main - Prints lower case alphabets
 * Return: Always 0 on success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
