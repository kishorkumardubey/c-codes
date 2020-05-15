#include <stdio.h>
void main() {
	int num;
	printf("Enter an int value to check Even or Odd:\n");
	scanf("%d",&num);
	if (num%2 == 0)
	    printf("Given number %d is EVEN NUMBER\n", num);
	else
	    printf("Given number %d is ODD NUMBER\n", num);
}
