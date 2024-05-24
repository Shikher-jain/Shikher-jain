#include<stdio.h>
void main ()
{
    float a,c,r,Pi=3.14;
    printf("Radius");
    scanf("%f",&r);
    a=Pi*r*r;
    printf("Area=%f",a);
    c=2*Pi*r;
    printf("circumference=%f",c);
}