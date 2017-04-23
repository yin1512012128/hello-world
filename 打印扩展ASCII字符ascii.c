#include <stdio.h>

unsigned char mychar;

int main(void)
{
	for (mychar = 180; mychar < 204; mychar++)
	{
		printf("ASCII code %c is character %d\n", mychar, mychar);
	}
	return 0;
 } 
