#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 *
 */

void test_islower(int n)

{

	int r;

	r = islower('n');
	putchar(r + '0');
	putchar('\n');
}

/**
 *
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)

{

	test_islower('H');
	return (0);

}
