#include<stdio.h>
void main()
{
int i ;
char s1[20],s2[20];
printf("Enter the string 1 :");
gets(s1);
printf("Enter the string 2 :");
gets(s2);
for(i=0;s2[i]!='\0';i++)
{
    s1[i]=s2[i];
}
printf(" string 1 is %s\n string 2 is %s",s1,s2);
}
