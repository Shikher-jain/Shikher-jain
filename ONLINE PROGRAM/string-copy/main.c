/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
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
    printf("String 2 %s copy in String 1 %s",str2,str1);
    strcpy(str1,str2);
    printf("\nString1 is %s\nString 2 is %s",str1,str2); 
}