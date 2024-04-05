/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("Enter an integer value: ");
    scanf("%d",&n);
    do
    {
        printf("\n%d",i);
        sum+=i;
        i++;
    }
    while(i<=n);
     printf("\nsum is %d",sum);
    return 0;
}
