/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void swap(int a,int b);
void main()
{
    int x,y,n;
    printf("Enter x= ");
    scanf("%d",&x);
    printf("\nEnter y= ");
    scanf("%d",&y);
    printf("Before swaping x=%d and y=%d",x,y);
    swap(x,y);
}
swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swaping x=%d and y=%d",a,b);
}

