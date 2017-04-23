#include <stdio.h>

int var =1;

int *ptr;

int main(void)
{
	ptr = &var;
	
	printf("\nDirect access, var = %d", var);
	printf("\nIndirectr access, var = %d", *ptr);
	printf("\nThe address of var = %d", &var);
	printf("\nThe address of var = %d\n", ptr);
	
	return 0;
}
