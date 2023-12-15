#include <stdio.h>
#include <stdlib.h>
#define size 5
int arr[size],R=-1,F=0,te=0,ch,n,i,x,a=1;

void rear_insert(){
    if(te==size)
        printf("Queue is full");
    else
    {
        printf("Enter a number ");
        scanf("%d",&n);
        R=(R+1)%size;
        arr[R]=n;
        te=te+1;
    }
}
void rear_del(){
    if(te==0)
        printf("Queue is empty");
    else{
        if(R==-1)
            R=size-1;
        printf("Number Deleted From Rear End = %d",arr[R]);
        R=R-1;
        te=te-1;
    }
}
void front_insert(){
    if(te==size)
        printf("Queue is full");
    else{
        printf("Enter a number ");
        scanf("%d",&n);
        if(F==0)
            F=size-1;
        else
            F=F-1;
        arr[F]=n;
        te=te+1;
    }
}
void front_del(){
    if(te==0)
        printf("Queue is empty");
    else{
        printf("Number Deleted From Front End = %d",arr[F]);
        F=(F+1)%size;
        te=te-1;
        }
}
void display(){
        if(te==0)
        printf("Queue is empty");
    else{
        x=F;
        for(i=1; i<=te; i++){
            printf("%d ",arr[x]);
            x=(x+1)%size;
        }
    }
}
int main(){
    // for(;;)		// An infinite loop
    while(a!=0){
        printf("\nF=%d  R=%d\n1. Add Rear\n2. Delete Rear\n3. Add Front\n4. Delete Front\n5. Display\n6. Exit\n",F,R);
        printf("Enter Choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:rear_insert();break;
            case 2:rear_del();break;
            case 3:front_insert();break;
            case 4:front_del();break;
            case 5:display();break;
            case 6:exit(0);break;
            default:printf("Wrong Choice");
        }
    }
    return 0;
}