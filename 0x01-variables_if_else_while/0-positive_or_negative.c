#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	} else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	} else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
