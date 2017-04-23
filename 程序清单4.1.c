/*  */
#include <stdio.h>

int a, b;

int main(void)
{
	/*  */
	
	a = b =5;
	
	/*  */
	/*  */
	
	printf("\nPost Pre");
	printf("\n%d  %d", --a, b--);
	printf("\n%d  %d", --a, b--);
	printf("\n%d  %d", --a, b--);
	printf("\n%d  %d", --a, b--);
	printf("\n%d  %d", --a, b--);
	printf("\n%d  %d",--a, b--) ;
	
	return 0;
}
