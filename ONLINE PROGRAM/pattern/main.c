#include<stdio.h>
void main(){
    int n=7;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){

if(i<j)
 printf("%d",j);
 if(i>j)
//printf("%d",j);
// else
        printf(" ");
    }
 printf("\n");
 }
}

