#include<stdio.h>
void main()
{
    char a[20],b[20];
    printf("Enter String 1");
    gets(a);
    printf("Enter String 2");
    gets(b);
    int i=0,j=0;
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }          
    a[i]='\0';
  printf("After concatenation \nString  is: %s ",a);
 // printf("String 2 is %s ",b);
  return 0 ;
} 
