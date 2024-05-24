#include <stdio.h>
void main()
{
int i,j,temp,a[10]={5,9,5,8,2,5,3,3,6,4};
for(j=0;j<9;j++)
{
    for(i=j+1;i<10;i++){
   if(a[i]<a[j])
   {
       temp=a[j];
       a[j]=a[i];
       a[i]=temp;
   }
}
}
for(j=0;j<10;j++)
printf("%d",a[j]);
}
