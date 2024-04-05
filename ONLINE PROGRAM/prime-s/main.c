/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter any no.:");
    scanf("%d",&n);
    if(n%2==0||n%3==0)
    {
        printf("no prime no.");
    }
    else if (n==1)
    {
    printf("prime no.");
    }
    else
    {
    printf("prime no. ");
}
return 0;
}