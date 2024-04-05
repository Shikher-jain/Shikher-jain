/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
   void p(char a);
   int main ()
{
  char a[300];// = "Hello World";
  printf("Enter:");
  gets(a);
   void p(char a)
   {
   }
   for (int i = 1;i<=strlen(a); i++)
   printf ("%d %s\n",i,a);
  //puts (a);
  //return 0;
}
