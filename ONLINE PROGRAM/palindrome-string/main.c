#include <stdio.h>
#include<string.h>
int main()
{ 
    char s[100],temp,s1[100];
    int i,j=0;
    printf("Enter String ");
    gets(s);
    strcpy(s1,s);
    {for(i=0,j=strlen(s)-1;i<j;i++,j--)
        { 
          temp=s[i];
          s[i]=s[j];
          s[j]=temp;
        }
         printf("%s is the reverse string",s);
         if(strcmp(s,s1)==0)
         printf("\nString is palindrome");
         else
         printf("\nString is not palindrome"); 
          return 0; 
    }
    
}

