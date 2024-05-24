#include <stdio.h> 
void main (){
   static int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
    int a,d,m,y,b;
    scanf("%d%d%d",&d,&m,&y);
    a=(y+y/4-y/100+y/400+t[m-1]+d)%7;
    b=a+1;
    printf("%d",b);
}
