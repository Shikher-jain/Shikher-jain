/******************************************************************************

Welcome to GDB Online.

GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char c ,C;
//    printf("Enter lowercase character ");
//    scanf("%c",&c);
//    printf("Enter uppercase character ");
//    scanf("%c",&C);
     for(c='a',C='A';c<='z',C<='Z';++c,C++)
     {
         printf("\n %c - %C",c,C);
     }
    return 0;
}
