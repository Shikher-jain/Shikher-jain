#include<stdio.h>
void a(int s);
void m(int p);
void main()
{
    int n;
    printf("Enter any five digit no. :");
    scanf("%d",&n);
    if(n%2==0)
   { printf("%d is Even no.",n);
    a(n);}
    else
    { printf("%d is Odd no.",n);
    m(n);
    }
}
void a(int s)
{
    int sum=0,t;
    while(s>0)
    {
        t=s%10;
        sum=sum+t;
        s=s/10;
    }
    
    printf("\nSum = %d",sum);
}
void m(int p)
{
    int mul=1,t;
    while(p>0)
    {
        t=p%10;
        mul=mul*t;
        p=p/10;
    }
   
    printf("\nProduct = %d",mul);        
    }