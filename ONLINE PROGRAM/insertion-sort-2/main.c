#include <stdio.h>
void main()
{
int i,j,temp,a[10]={5,9,5,8,2,5,3,3,6,4};
for(j=1;j<10;j++)
{
    temp=a[j];
    for(i=j-1; temp<a[i]&&i>=0;i--)
    {
            a[i+1]=a[i];
    }
    a[i+1]=temp;
}
for(j=0;j<10;j++)
printf("%d",a[j]);

}
