
#include <stdio.h>
#define N 20
int main()
{
    int demo;
    printf("demo size is %d \n",sizeof(demo));
    printf("Hello World\n\n");
   int a[N]={0,1,2,3,4,5,6,7,8,9,10};
   int z=sizeof(a);
   printf("%d",z);
    for(int i=0;i<=N;i++)
    printf("%d\n",a[i]);
    return 0;
}

