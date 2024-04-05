/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write #*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i=0,j,a,rem,arr[100];
    printf("Enter no. ");
    scanf("%d",&n);
    while(n)
    {
        rem=n%2;
        n=n/2;
        arr[i]=rem;
        i++;
    }
    for(j=i-1;j>=0;j--)
    printf("%d",arr[j]);
    return 0;
}

