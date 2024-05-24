#include <stdio.h>
void main()
{
    int n,m,i;
    for(n=2;n<=200;n++)
   {
    int temp=n;
    int flag=0;
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
       {
        flag=1;
        break;
       }
    }
    if(flag==0)
    printf("%d\n",n);
   }   
}