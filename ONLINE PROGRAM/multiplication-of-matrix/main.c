#include <stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter elements for array 1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 1 will be:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements for array 2:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix 2 will be:\n");
  
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
    c[i][j]+=a[i][k]*b[k][j];
        }
    }
    printf("Multiplication of Matrices is\n");
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
    printf("%d\t",c[i][j]);
        }  
        printf("\n");
}}