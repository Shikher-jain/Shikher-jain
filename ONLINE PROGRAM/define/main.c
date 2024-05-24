/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define a 30 
#define b 45
void main()
{
   
    int s;
    #if(a<b)
    printf("sum is %d ",a+b);
    #elif(a==b)
    printf("sub is %d",a-b);
    #else
    printf("product is %d",a*b);
    #endif
      
    #ifdef a
    printf("A");
    #endif
    #ifndef b
    printf("B");
    #endif
    
    
}
