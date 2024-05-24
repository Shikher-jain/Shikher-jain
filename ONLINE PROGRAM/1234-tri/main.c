#include <stdio.h>
void main()
{
    int n,i,j,l,k;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=0;k<n-i;++k)
        printf(" ");
        l=i;
        for(j=i;j<=2*i-1;++j)
        printf("%d",l++);
        l=l-2;
        for(j=1;j<i;j++)
        printf("%d",l--);
        printf("\n");
    }
}


