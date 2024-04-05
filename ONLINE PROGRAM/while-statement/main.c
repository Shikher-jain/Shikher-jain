/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf(" Enter an integer value: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n %d",i);
        sum +=i;
        i++;
    }
    printf("\n Sum is %d",sum);
    printf("\n Thank You :-)");

    return 0;
}
