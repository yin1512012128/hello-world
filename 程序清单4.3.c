/*  */

#include <stdio.h>

int x, y;
 int main(void)
 {
 	/*  */
 	
 	printf("\nInput an integer value for x: ");
 	scanf("%d, &x");
 	printf("\nInput an integer value for y: ");
 	scanf("%d", &y);
 	
 	/*  */
 	
 	if (x ==y)
 	  printf("x is equal to y\n");
 	  
 	if (x> y)
 	    printf("x is greater than y\n");
 	    
 	if (x < y)
 	    printf("x is smaller than y\n");
 	    
 	return 0;
  } 
