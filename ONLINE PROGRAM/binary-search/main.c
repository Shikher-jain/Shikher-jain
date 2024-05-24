/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    int n,i,item,a[50],first,last,mid;
    printf("\nEnter Sorted data only");
    printf("\nEnter the no. element ");
    scanf("%d",&n);
    printf("Enter the elements of array \n ");
    for(i=0;i<n;i++)    
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf(" %d",a[i]);
    printf("\nEnter the element to be search ");
    scanf("%d",&item);
    first=0;
    last=n-1;
    mid=(last+first)/2;
    while(first<=last)
  {
    if(item>a[mid])
    {
    first=mid+1;
    mid=(last+first)/2;
    }
    else if(item==a[mid])
    {
    printf("Element on position %d",mid+1);
    break;
    }
    else
    {
    last=mid-1;
    mid=(mid+last)/2;
    }
  }
    if(first>last)
    printf("\nUnsuccessful");
}
   