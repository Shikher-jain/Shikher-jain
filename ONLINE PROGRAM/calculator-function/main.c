#include<stdio.h>
int add(int a1,int a2);
int sub(int s1,int s2);
int mul(int m1,int m2);
int  di(int di,int d2);
int mod(int n1,int n2);
void main()
{
    int x,y;
    printf("Enter two no.");
    scanf("%d %d",&x,&y);
   
    printf("\n%d is add", add(x,y));

    printf("\n%d is sub",sub(x,y));
   
    printf("\n%d is mul",mul(x,y));
    
    printf("\n%d is di",di(x,y));
    
    printf("\n%d is mod",mod(x,y));
}
int add(int a1,int a2)
{
    int a;
    a=a1+a2;
    return a;
}
int sub(int s1,int s2)
{
    int a;
    if(s1>=s2)
    a=s1-s2;
    else(s2>=s1);
    a=s2-s1;
    return a;
}
int mul(int m1,int m2)
{
    int a;
    a=m1*m2;
    return a;
}
int  di(int d1,int d2)
{
    int a;
    if(d1>=d2)
    a=d1/d2;
    else(d2>=d1);
    a=d2/d1;
    return a;
}
int mod(int n1,int n2)
{
    int a;
    if(n1>=n2)
    a=n1%n2;
    else(n2>=n1);
    a=n2%n1;
    
    return a;
}