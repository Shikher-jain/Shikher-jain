#include <stdio.h>

int main()
{
    int a[10],max,min,i;
    printf("Enter element of array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
         min=max=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("min is %d and max is %d",min,max);
   
    

    return 0;
}
