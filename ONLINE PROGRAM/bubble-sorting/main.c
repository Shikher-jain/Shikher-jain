/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int n,i,temp,a[200],j;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)//for passes 
    {
        for(j=0;j<n-1;j++)//for comparison
        {
            if(a[j]>a[j+1]) //ascending 
           // if(a[j]<a[j+1]) //descending 
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array of \n%d is",a[i]);
    for(i=0;i<n;i++)
    printf(" %d",a[i]);
    
   
    
}
