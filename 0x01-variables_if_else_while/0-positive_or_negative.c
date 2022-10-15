#include <stdio.h>
int main(void)
{
	int n = 0;
	scanf("%d", &n);

	if(n > 0)
	{
		printf("is positive\n");
	}else if(n == 0)
	{
		printf("is zero\n");
	}else if (n < 0)
	{
		printf("is negative\n");
	}
	return (0);
}
