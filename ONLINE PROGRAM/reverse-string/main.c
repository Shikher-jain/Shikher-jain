#include <stdio.h>
#include<string.h>
int main()
{ 
    char s[100],temp;
    int i,j=0;
    printf("Enter String ");
    gets(s);
    
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
        { temp=s[i];
         s[i]=s[j];
         s[j]=temp;}
         printf("%s is the reverse string",s);
         return 0;
           
}
