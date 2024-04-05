/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 int time, n;
 printf("Enter time in 24 hrs. format: ");
 scanf("%d",&n);
 if(n<=24)
 {
 (time < 12) ? printf("Good day.") : printf("Good evening.");
 }
 else
 {
     printf("Please Enter in 24 hrs. format");
 }
    return 0;
}