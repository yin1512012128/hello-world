#include <stdio.h>

#define MAX 10

int array[MAX], count;

int largest(int num_array[], int length);

int main(void)
{
	for(count = 0; count < MAX; count++)
	{
		printf("Enter an integer value: ");
		scanf("%d",&array[count]);
	}
	printf("\n\nLargest value = %d\n", largerst(array, MAX));
	
	return 0;
}

int largerst (int num_array[], int length)
{
	int count, biggest = -12000;
	
	for ( count = 0; count < length; count++)
	{
		if (num_array[count] > biggest)
		biggest = num_array[count];
	}
	return biggest;
}

