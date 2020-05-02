#include <stdio.h>

int main()
{
	int numOne, numTwo, numThree =0;
	int min, max =0;

	scanf("%d %d %d", &numOne, &numTwo, &numThree);
	min = numOne;
	max = numOne;

	if(numTwo <= numOne && numTwo <= numThree)
	{
		min = numTwo;
	}
	else if(numThree <=numOne && numThree <= numTwo)
	{
		min = numThree;
	}

	if(numOne <= numTwo && numThree <= numTwo)
	{
		max = numTwo;
	}
	else if(numOne <= numThree && numTwo <= numThree)
	{
		max = numThree;
	}

	printf("min: %d\n", min);
	printf("max: %d\n", max);

	return 0;
	

}
