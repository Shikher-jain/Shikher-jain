/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    int str1[20],str2[20];
    printf("Enter the string 1:");
    gets(str1); 
    printf("Enter the string 2:");
    gets(str2);
    int t = strcmp(str1,str2);
    if(t==0)
    printf("\n  Both strings are equal");
    else
    printf("\n Both strings are unequal");
    return 0;
}