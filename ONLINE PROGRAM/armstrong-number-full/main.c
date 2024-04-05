/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,temp,sum=0,d,A_sum=0;
   //A_sum -> Armstrong Number
    printf("Enter a three digit integer: ");
    scanf("%d",&n);
    temp=n;
  if(n<1000) 
  {
      while(n!=0)
    {
        d=n%10;
        sum=sum+d;
       A_sum=A_sum+d*d*d;
        n=n/10;
    }
    printf("\nThe sum is %d",sum);
    if(temp==A_sum)
    {
    printf("\n%d is an armstrong no. ",temp);
    printf("\n %d = %d",temp,A_sum);
    }
    else
    {
    printf("\n%d isn't an armstrong no. ",temp);
    printf("\n %d != %d",temp,A_sum);
    }
  }
  else
  printf("Enter three digit no. only");
    return 0;
}
