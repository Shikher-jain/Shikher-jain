#include <stdio.h>
void main()
{
    int r,c,a[300][300],b[300][300],sum[300][300],i,j;
   printf("Enter no. of rows: ");
   scanf("%d",&r);
printf("Enter no. of column: ");
   scanf("%d",&c);
   for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements for a%d%d:\n",i+1,j+1);
    
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 1 will be:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements for arrray 2 a%d%d:\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix 2 will be:\n");
  
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
    sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of Matrices is\n");
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
    printf("%d\t",sum[i][j]);
        }  
        printf("\n");
}}
