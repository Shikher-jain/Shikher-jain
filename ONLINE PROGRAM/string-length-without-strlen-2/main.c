#include<stdio.h>
void main ()
{
int i =0;
char s[20];
printf("Enter thethe string :");
gets(s);
while(s[i]!='\0')
{
    i++;
}
printf("The lenght of String is %d:",i);
}
