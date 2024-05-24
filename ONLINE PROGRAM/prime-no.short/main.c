#include <stdio.h>
int main()
{
    int n;
    printf("Enter any no.:");
    scanf("%d",&n);
    if(n%2==0||n%3==0||n!=1)
        printf("no prime no.");
    else
        printf("prime no. ");
return 0;
}