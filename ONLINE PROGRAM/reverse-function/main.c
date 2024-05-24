#include <stdio.h>
void find(int m);
void main()
{
   int n,a;
   printf("Enter any no. :");
   scanf("%d",&n);
   find(n);


}
  void find(int m)
  {
      int a,rev=0;
      while(m!=0)
      {
      a=m%10;
      rev=rev*10+a;
      m=m/10;
  }
  
  printf("The reverse is %d",rev);
  }