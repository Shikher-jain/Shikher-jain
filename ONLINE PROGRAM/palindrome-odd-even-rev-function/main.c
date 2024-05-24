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
      int a,rev=0,o;
      o=m;
      if(m%2==0)
      printf("Even no.");
      else
      printf("Odd no.");
      while(m!=0)
     
    {
      a=m%10;
      rev=rev*10+a;
      m=m/10;
    }   
      printf("\nThe reverse is %d",rev);
      printf("\n Hence") ;
      if(rev%2==0)
      printf("\nThe Reverse no. is Even");
      else
      printf("\nThe Reverse no. is Odd");
      while(m!=0)
     
      if(o==rev)
      printf("\nNo. is Palindrome ");
      else
      printf("\nNo. isn't Palindrome ");
 }