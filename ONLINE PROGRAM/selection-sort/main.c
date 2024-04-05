#include <stdio.h>

void main()
{
    int n,i,temp,a[200],j;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)//for passes 
    {
        for(j=i+1;j<n;j++)//for comparison
        {
            if(a[j]<a[i]) //ascending 
           // if(a[j]>a[i]) //descending 
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted array of \n%d is",a[i]);
    for(i=0;i<n;i++)
    printf(" %d",a[i]);
    
   
    
}

