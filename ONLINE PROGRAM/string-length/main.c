#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter the string 1:");
    gets(str1);
    printf("Enter the string 2:");
    gets(str2);
    int l1 = strlen(str1);
    int l2 = strlen(str2);
 
    printf("\nLength of string 1 is %d",l1);
    printf("\nLength of string 2 is %d",l2);
    return 0;
}
