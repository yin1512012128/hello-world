#include <stdio.h>

struct entry {
	char fname[20];
	char lname[20];
	char phone[10];
	
};

struct entry list[4];

int i;

int main(void)

{
	for (i = 0; i < 4; i++)
	{
	
	printf("\nEnter first name: ");
	scanf("%s", list[i].fname);
	printf("Enter last name: ");
	scanf("%s", list[i].lname);
	printf("enter phone in 123-4567 format: ");
	scanf("%s", list[i].phone);
	
}

printf("\n\n");

for (i = 0; i < 4; i++)
{
	printf("Name: %s %s",list[i].fname, list[i].lname);
	printf("\t\tPhont: %s\n", list[i].phone);
	
}

return 0;
}
