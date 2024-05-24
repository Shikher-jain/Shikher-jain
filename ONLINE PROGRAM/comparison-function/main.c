#include <stdio.h>
int large(int x,int y,int z);
int main()
{
   int a,b,c;
   printf("Enter three no. for comparison:");
   scanf("%d %d %d",&a,&b,&c);
   large(a,b,c);
   return 0;
   }
   
       int large(int x,int y,int z)
     {
       int X,Y,Z;
       if(x>y&&x>z)
       printf("%d is largest no.",x);  
      if(x<y&&y>z)
       printf("%d is largest no.",y);  
      if(z>y&&x<z)
       printf("%d is largest no.",z);  
      
       return X;
   }
  
