#include<stdio.h>
void main() {
	int year;
	
	printf(" Enter any year you :\n");
	scanf("%d", &year);
	
	if ( year%4 == 0)
	   printf("%d is a Leap Year.\n", year);
	else if( year%1 == 0)
	   printf("%d is not the Leap year.\n", year);      
}
