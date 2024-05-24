/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,r;
    printf("Enter no. of columns and rows: ");
    scanf("%d",&r);
    for(i=r;i>=1;i--)
    {
        for(j=i;j<=r;j++)
        {
            printf(" %d",i);
        }
    
        printf("\n");
    }

    return 0;
}
