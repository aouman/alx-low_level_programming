#include <stdio.h>
int main(void)
{
	/*
	 *I check the value of the varible n
	 * */

	int n = 0;
	scanf("%d", &n);

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("-%d is negative\n", n);
	}
	return (0);
}
