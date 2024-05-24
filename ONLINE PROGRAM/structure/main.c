/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct s{
    int a,g,gk;
    float b;
    char y;
}e;
int main()
{
    e *l;
   l->a=l->gk;
    int s=sizeof(struct s);
    printf("1 %d\n",s);
  printf("2 %d /%d/ %f/ %c\n",l->a,l->gk,l->b,l->y);
  int k=sizeof(e);
      printf("3 %d\n",k);
      
    return 0;
}
