#include <stdio.h>

/**
 * main - represent Entry Point to the program
 * Return: 0 to stop the program
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);

}
