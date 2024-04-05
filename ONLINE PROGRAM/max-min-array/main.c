#include<stdio.h>
void main ()
{
int i,j,arr[10]={2, 5, 4, 1, 8, 9, 11, 6, 3,7};
int min, max;
min=max=arr[0];
for(i=1;i<10;i++)
{

if(arr[i]<min)

min=arr[i]; if(arr[i]>max) max=arr[i];
}
printf("Minimum= %d, Maximum=%d", min, max);
}