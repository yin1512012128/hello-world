#include <stdio.h>

char input[257], *ptr;

int main(void)
{
	puts("Enter text a line at a time, then press Enter.");
	puts("Enter a nlank line when done.");
	while( *(ptr = gets(input)) != NULL )
	   printf("You enterend  %s \n", input);
	puts("Thank you and good-bye\n");
	return 0;
}
