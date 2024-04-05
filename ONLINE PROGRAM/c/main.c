#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   int num1,num2;
   char  op[10];
 // op= b[1];
   printf("Enter operator");
   scanf("%s",op);
   printf("Enter Num1: ");
   scanf("%d",&num1);
   printf("Enter Num2: ");
   scanf("%d",&num2);
  // num1= atoi(b[2]);
  // num2= atoi(b[3]);
   if(strcmp(op,"add")==0)
     printf("%d %s %d = %d",num1,op,num2,num1+num2);
    if(strcmp(op,"subtract")==0)
     printf("%d %s %d = %u",num1,op,num2,num1-num2);
   if(strcmp(op,"product")==0)
     printf("%d %s %d = %u",num1,op,num2,num1 * num2);
   if(strcmp(op,"divide")==0)
    printf("%d %s %d = %f",num1,op,num2,((float)(num1)/num2));
 
  return 0;
}

