#include<stdio.h>
void main()
{
	int opt;
	
	printf("Enter the Week number from (1 to 7)");
	scanf("%d",&opt);
	
	printf("Day : ");
	
 	if (opt == 1)
	{
		printf("Sunday");
	}
    else  if (opt == 2)
	{
		printf("Monday");
	}
	else if (opt == 3)
	{
		printf("Tuesday");
	}
	else if (opt == 4)
	{
		printf("Wednesday");
	}
	else if (opt == 5)
	{
		printf("Thrusday");
	}
	else if (opt == 6)
	{
		printf("Friday");
	}
	else if (opt == 7)
	{
		printf("Saturday");
	}	
	 	if (opt == -1)
	{
		printf("Sunday");
	}
    else  if (opt == -2)
	{
		printf("Monday");
	}
	else if (opt == -3)
	{
		printf("Tuesday");
	}
	else if (opt == -4)
	{
		printf("Wednesday");
	}
	else if (opt == -5)
	{
		printf("Thrusday");
	}
	else if (opt == -6)
	{
		printf("Friday");
	}
	else if (opt == -7)
	{
		printf("Saturday");
	}	

}
