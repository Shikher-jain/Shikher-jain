#include<stdio.h>
void main()
{
int i ;
char s1[20],s2[20];
printf("Enter the string 1 :");
gets(s1);
printf("Enter the string 2 :");
gets(s2);
for(i=0;s1[i]!='\0'&&s2[i]!='\0'&&s1[i]==s2[i];i++)
{
    
}
if(s1[i]==s2[i])
printf("Both string are equal");
else
printf("Both string are unequal");
}
