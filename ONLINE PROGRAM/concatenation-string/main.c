#include <stdio.h>
#include<string.h>
void main()
{
    int str1[20],str2[20];
    printf("Enter the string 1:");
    gets(str1); 
    printf("Enter the string 2:");
    gets(str2);
    strcat(str1, str2);
    printf("Concatenation of giving String is %s",str1);
    printf("And remaining String is %s",str2);
}