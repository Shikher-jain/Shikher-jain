/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int x,int y);
int main()
{
   int a,b,s;
   printf("Enter Two no. for Adding:");
   scanf("%d %d",&a,&b);
   s=sum(a,b);
   printf("The sum is %d",s);
   return 0;
   }
   
       int sum(int x,int y)
     {
       int X;
       X=x+y;
       return X;
   }
  
