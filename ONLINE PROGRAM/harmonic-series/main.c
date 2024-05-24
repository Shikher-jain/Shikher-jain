/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int n,i;
    float s=0.0;
    printf("Enter anys no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n 1/%d",i);
    if(i==n||i<n)
    {
    s=s+1/(float)i;
    }
    }
    printf("\n The sum of upto %d is %f",n,s);
    
}
    
   
