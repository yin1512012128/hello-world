#include <stdio.h>

float expenses [13];
int count;

int main(void)
{
	for ( count = 1; count < 13; count++)
	{
		printf("enter expenses for moth %d: ", count);
		scanf("%f", &expenses[count]);
	}
	
	for ( count = 1; count < 13; count++)
	{
		printf("Moth %d = $%.2f\n", count,expenses[count]);
	}
	return 0;
}

