#include <stdio.h>
long int fib(int f);
void main()
{
    int n,sum;
    printf("Enter any no.:");
    scanf("%d",&n);
    printf("\nThe Fibonacci of %dth is %lu",n,fib(n));
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