#include <stdio.h>

void main()
{
    int n,i,temp,a[200],j;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(j=0;j<n;j++)
    scanf("%d",&a[j]);
    for(i=1;i<n;i++) 
    {
        temp=a[i];
        for(j=i-1;temp<a[j]&&0<=j;j--)//for comparison
           a[j+1]=a[j];
        a[j+1]=temp;           
    }
    printf("Sorted array is");
    for(j=0;j<n;j++)
    printf(" %d",a[j]);
    
   
    
}

