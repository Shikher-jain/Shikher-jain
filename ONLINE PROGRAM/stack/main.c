//STACK
#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int size;
    int top;
    int *arr;
}S;
//CHECK FOR EMPTY
int empty(S*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else
    return 0;
}

//CHECK FOR FULL
int full(S*ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else
    return 0;
}

void push(S*ptr,int value){
    if(full(ptr)){
        printf("STACK OVERFLOW!\n");
        printf("Can't be push %d to the stack\n",value);
    }
    else
{
    ptr->top++;
    ptr->arr[ptr->top]=value;
}
}

int pop(S*ptr){
    if(empty(ptr)){
        printf("STACT UNDERFLOW\n");
        printf("Can't pop from the stack\n");
    return-1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    }

int peek(S*ptr,int j){
    int index=ptr->top-j+1;
    if(index<0){
        printf("Invalid position\n");
    return -1;    
    }
    else{
        return ptr->arr[index];
    }
}

int top(S*ptr){
    return ptr->arr[ptr->top];
}

int bottom(S*ptr){
    return ptr->arr[0];
}
void main()
{
    
    S*ptr=(S*)malloc(sizeof(S));
    ptr->size=10;
    ptr->top=-1;
    ptr->arr=(int*)malloc(ptr->size*sizeof(int));
    printf("Stack has been created successfully\n");
    printf("Before pushing,full:%d\n",full(ptr));
    printf("Before pushing,empty:%d\n \n",empty(ptr));
    push(ptr,0);
    push(ptr,1);
    push(ptr,2);
    push(ptr,3);
    push(ptr,4);
    push(ptr,5);
    push(ptr,6); 
    push(ptr,7);
    push(ptr,8);
    push(ptr,9);
    push(ptr,10);//OVERFLOW not count while poping
    
    printf("\nAfter pushing,full:%d\n",full(ptr));
    printf("After pushing,empty:%d\n\n",empty(ptr));
    
   /* printf("%d popped from the stack\n",pop(ptr));
    printf("%d popped from the stack\n",pop(ptr));
    printf("%d popped from the stack\n",pop(ptr));
    printf("%d popped from the stack\n",pop(ptr));
    printf("%d popped from the stack\n",pop(ptr));
    printf("%d popped from the stack\n",pop(ptr));
    printf("%d popped from the stack\n",pop(ptr));
    printf("%d popped from the stack\n",pop(ptr));
    printf("%d popped from the stack\n",pop(ptr));
    printf("%d popped from the stack\n",pop(ptr));
    printf("%d popped from the stack\n",pop(ptr));//UNDERFLOW
    printf("%d popped from the stack\n",pop(ptr)); */

    for (int j = 1; j < ptr->top+1; j++) {
        printf("The value of %d if %d\n",j,peek(ptr,j));
    }
    printf("\nThe top most value of this stack %d\n",top(ptr));
    printf("The bottom most value of this stack %d\n",bottom(ptr));
}