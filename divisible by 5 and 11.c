#include <stdio.h>
void main() {
	int num1;
	printf(" Please Enter any num1 to Check whether it is Divisible by 5 and 11:\n");
	scanf("%d", &num1);
	if(num1% 5==0) 
	{
	    printf(" Given num1 %d is Divisible by 5 \n", num1);
    }
	if (num1% 11 ==0)
	{
	    printf(" Given num1 %d is  Divisible by 11\n", num1);
	}
	else 
	{ 
	    printf(" Not divisible by 5 and 11");
	}
}
