#include <stdio.h>
long int fib(int f);
void main()
{
    int n,sum=0,i;
    printf("Enter any no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("\nThe Fibonacci of %dth is %lu",i,fib(i));
    sum+=fib(i);
    printf("\n%d is the sum of series",sum);
}   
long int fib(int f)
{
    if(f==1)
    return 0;
    else if(f==2)
    return 1;
    else
    return(fib(f-1)+fib(f-2));
    
    
}