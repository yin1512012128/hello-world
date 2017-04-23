#include <stdio.h>

char input[81];

char *zifuchuan = "Enter some text, then press Enter: ";
int main (void)
{
	puts(zifuchuan);
	gets(input);
	printf("You entered : %s\n", input);
	
	return 0;
 } 
