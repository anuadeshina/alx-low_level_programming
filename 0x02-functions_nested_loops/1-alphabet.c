#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase followed by a new line
 * Return: Always 0 on success
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
