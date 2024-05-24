#include <stdio.h>
void main()
{
    int a[3][3],sum,c,i,j;
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
     sum+=a[i][i];
     c+=a[i][2-i];
    }
        printf("\n The sum of diagonal is %d",sum);
        printf("\n The sum of off-diagonal is %d",c);
        
}
