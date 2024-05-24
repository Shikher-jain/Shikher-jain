#include <stdio.h>
void main()
{
    int a[3][3],b[3][3],i,j;
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
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
    b[i][j]=a[j][i];
        }
    }
    printf("Transpose of Matrices is\n");
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
    printf("%d\t",b[i][j]);
        }  
        printf("\n");
}}