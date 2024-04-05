/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int f(int x ,int y);
int main()
{
    char str[20];
    int n,a,b;
    puts("Enter Your Name => ");
    gets(str);
    printf("The name is %s",str);
    printf("\nEnter two digits:");
    scanf("%d %d",&a,&b);
    n=f(a,b);
    printf("%d",n);
    
    
}

    int f(int x,int y)
    {
        int a,s,m;
        a=x+y;
        if(x>y)
        s=x-y;
        else(y>x);
        s=y-x;
        m=x*y;
        printf("\nSum is %d",a);
        printf("\nSubtraction is %d",s);
        printf("\nMultiplication is %d",m);
        return a;
        return s;
        return m;
    
}

