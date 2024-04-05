#include<stdio.h>
/*8. WAP that finds whether a given number is even or odd. */
void main()
{
	int  n;
	printf("Enter any number n =");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("\n n is even number.");
	}
	else
	{
		printf("\n n is odd number.");
	}
}
