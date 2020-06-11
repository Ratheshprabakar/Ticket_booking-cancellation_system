#include<stdio.h>
struct details
{
	char name[100];
	static int seat_no;
	int age;
};
struct details s[100];
void booking();
void cancellation();
void status();
int choice;
int main()
{
	printf("Welcome to Ticket Booking/Cancellation E-Portal");
	printf("The Services are\n1. BOOKING\n2. CANCELLATION\n3. CHECK STATUS\n4. EXIT\nEnter your choice\t");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			booking();
			break;	
		}	
		case 2:
		{
			cancellation();
			break;
		}
		case 3:
		{
			status();
			break;	
		}
		case 4:
		{
			exit(1);	
		}
		default:
		{
			printf("Enter the valid choice\n");
			break;	
		}
	}
	
}

