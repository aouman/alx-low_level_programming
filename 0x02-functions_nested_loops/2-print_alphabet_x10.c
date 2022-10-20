#include "holberton.h"
#include "main.c"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 */

void print_alphabet_x10(void)

{
	int count = 0;

	char a;


	while (count++ <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
		_putchar('\n');
	}

}
