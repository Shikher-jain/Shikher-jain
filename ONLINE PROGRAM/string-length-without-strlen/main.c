/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i;
    char str[200];
    printf("Enter the String:");
    gets(str);
    for(i=0;str[i]>'\0';i++)
    printf("Length of string is %d",i);
}

