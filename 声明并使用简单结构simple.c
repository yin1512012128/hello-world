#include <stdio.h>



struct coord{
;
     int x;
	 int y;
} mypoint;

int main(void)
{
	mypoint.x = 12;
	mypoint.y = 14;
	
	printf("\nThe corrdinates are: (%d, %d).",
	        mypoint.x, mypoint.y);
	
	return 0;
}
