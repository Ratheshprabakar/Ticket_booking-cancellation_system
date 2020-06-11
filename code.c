#include<stdio.h>
struct details
{
	char name[100];
	int seat_no;
	int age;
};
struct details s[100];
void booking();
void cancellation();
void status();
int choice,count;
char temp[100];
int temp_seat,temp_age,i;
int main()
{
	while(1)
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
			/*case 2:
			{
				cancellation();
				break;
			}
			case 3:
			{
				status();
				break;	
			}*/
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
}
void booking()
{
	printf("Enter Number of Tickets you are going to book\t");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		printf("Enter the %d person name\t",i+1);
		scanf("%s",temp);
		printf("\nEnter the Seat Number for %d person\t",i+1);
		scanf("%d",&temp_seat);
		printf("\nEnter the age for %d person\t",i+1);
		scanf("%d",&temp_age);
		if(s[temp_seat].seat_no==0)
		{
			strcpy(s[temp_seat].name,temp);
			s[temp_seat].seat_no=1;
			s[temp_seat].age=temp_age;		
		}
		else
		{
			printf("\nOops! Seat No : %d is already booked by someone. Please try another\n",temp_seat);
			--i;		
		}	
	}
		
}

