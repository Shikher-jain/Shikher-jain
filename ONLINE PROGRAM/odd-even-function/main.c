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
     if(m%2==0)
     printf("even no.");
     else
     printf(" odd no.");
  }