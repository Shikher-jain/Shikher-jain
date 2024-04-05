/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3][3][3]=
    {
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {9,8,7},
            {6,5,4},
            {3,2,1}
        }
    };
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d\t",a[i][j][k]);
            }
    printf("\n");
        }
        printf("\n");
    }
}

    