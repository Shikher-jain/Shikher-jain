
/*WAP to print the 
table of number which 
was enter by user,in 
the format of 2*1=2*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the no. which you want to print the table");
    scanf("%d",&a);
    for(b=1;b<=10;b++)
    {
      c=b*a;
        printf("%d * %d = %d \n",a,b,c);
    }
}