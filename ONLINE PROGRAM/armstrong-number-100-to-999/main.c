#include <stdio.h>
void main()
{
    int n,num,temp,d,A_sum;
    for(n=100;n<=999;n++)
   { 
       num=n;
       temp=n;
       A_sum=0;
      while(num!=0)
    {
        d=num%10;
       A_sum=A_sum+d*d*d;
        num=num/10;
    }
    if(A_sum==temp)
    printf("\n%d",temp);
} 
}


