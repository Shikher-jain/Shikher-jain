#include <stdio.h>

int main()
{
    int a[10],j,i,temp;
    printf("Enter element of array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=9;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("\n Reverse of array is :");
     for(i=0;i<10;i++)
     {
         printf("%d",a[i]);
     }
       return 0;
}
