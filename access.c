#include <stdio.h>

#define MAX 4

struct part {
             short number;
             char name[10];
} data[MAX] = {1, "Smith",
               2, "Jones",
			   3, "Adams",
			   4, "wilson",
			   };
struct part *p_part;
int count;

int main(void)
{
	p_part = data;
	
	for (count = 0; count < MAX; count++)
	{
		  printf("At address %d: %d %s\n", p_part, p_part->number,
		         p_part->name);
		  p_part++;
	}
	
	return 0;
}
