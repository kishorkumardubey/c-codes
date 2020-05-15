#include<stdio.h>

int main()
{
	int A , B , C ;

	printf("Enter first numbers:");
	scanf("%d", &A );
	printf("Enter second numbers:");
	scanf("%d", &B );
	printf("Enter third numbers:");
	scanf("%d", &C );

    if ( A > B ){
    	printf("A is greater than B\n", A);
	}
	else if( A > C )
	{
		printf("A is greater than C\n", A);
	}
	if ( B > A ) {
		printf("B is greater than A\n", B);
	}
	else if( B > C ) 
	{
		printf("B is greater than C\n", B);
	}
	if ( C > A ) {
		printf("C is gerater than A\n", C);
	}
	else if( C > B )
	{
		printf("C is greater than B\n", C);
	}
    else
    {
    	printf("They are equal\n");
	}
}
