#include <stdio.h>

void main()
{
    int n,m,i,flag=0;
    printf("Enter any no.:");
    scanf("%d",&n);
    m= n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
       {
           printf("%d isn't a prime no.",n);
        flag=1;
        break;
       }
    }
    if(flag==0)
    printf("%d is a prime no.",n);
}   
  