/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int num,n,temp,rev,a,f,l;
    printf("Enter the first and last Term:");
    scanf("%d %d",&f,&l);
    for(n=f;n<=l;n++)
    {
        num=n;
        temp=n;
        rev=0;
        while(num!=0)
        {
            a=num%10;
            rev=rev*10+a;
            num=num/10;
        }
        if(rev==temp)
        printf("\n%d",temp);
    }
    
}
