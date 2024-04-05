/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,temp,sum=0,rev=0,d;
    printf("Enter an integer: ");
    scanf("%d",&n);
    temp=n;
    while(0<n)
    {
     d=n%10; 
     sum+=d;
     rev=rev*10+d;
     n=n/10;
    }
printf("\nThe sum of %d is %d",temp,sum);
printf("\nThe reverse of %d is %d", temp,rev);
    return 0;
}
