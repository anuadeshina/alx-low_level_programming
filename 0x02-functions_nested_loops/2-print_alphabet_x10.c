#include "main.h"

/**
 * main - Prints 10 times the alphabet, followed by a new line
 * Return: Always 0 on success
 */

void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		alphabet_count++;
		_putchar('\n');
	}

}
