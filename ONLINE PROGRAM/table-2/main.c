/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the no. ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("\n %d * %d = %d",n,i,n*i);
    }
     for(i=1;i<=10;i++)
    {
        printf("\n  %d",n*i);
        
    }
    return 0;
}
