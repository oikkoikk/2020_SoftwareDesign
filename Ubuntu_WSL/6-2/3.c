#include <stdio.h>

int main()
{
	int num=0;

	scanf("%d", &num);

	if( num < -10)
	{
		printf("n < -10");
	}
	else if(-10 <= num && num < 0)
	{
		printf("-10 <= num < 0");
	}
	else if(0<=num && num < 10)
	{
		printf("0<= num < 10");
	}
	else
	{
		printf("n >= 10");
	}

	return 0;
}

