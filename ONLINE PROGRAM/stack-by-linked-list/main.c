#include <stdio.h>
#include<stdlib.h>
typedef struct stack{
    int data;
    struct stack* next;
} S;
S* top=NULL;
void traversal(S*ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int empty(S*top){
    if(top==NULL){
        return 1;
    }
    else {
        return 0;
}
}

int full(S* top){
    S* ptr=(S*)malloc(sizeof(S));
    if(ptr==NULL){
        return 1;
    }
        else{
            return 0;
        }
    }
S* push(S*top,int x){
    if(full(top)){
        printf("STACK OVERFLOW\n");
    }
    else{
    S* in=(S*)malloc(sizeof(S));
    in->data=x;
    in->next=top;
    top=in;
    return top;
    }

}
int pop(S*ptr){
    if(empty(ptr)){
        printf("STACK UNDERFLOE\n");
    }
    else{
        S*out=top;
        top=ptr->next;
        int n=out->data;
        free(out);
        return n;
    }
}

int peek(int postion){
    S* ptr=top;
    for(int i=0;((i<postion-1)&&(ptr!=NULL));i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int stackTop(){
    return top->data;
}
int main()
{
    //MEMORY ALLOCATION...
   /* S* top=(S*)malloc(sizeof(S));
    S* second=(S*)malloc(sizeof(S));
    S* end=(S*)malloc(sizeof(S));
 
    //DATA ENTRY...
    top->data=9;
    top->next=second;
    second->data=5;
    second->next=end;
    end->data=12;
    end->next=NULL;*/
    top=push(top,7/*DATA*/);
    top=push(top,6/*DATA*/);
    top=push(top,5/*DATA*/);
    top=push(top,4/*DATA*/);
    top=push(top,3/*DATA*/);
    top=push(top,2/*DATA*/);
    top=push(top,1/*DATA*/);
    top=push(top,0/*DATA*/);
    traversal(top);
    // printf("AFTER POPPING\n");
    
    printf("POPPED ELEMENT IS %d\n",pop(top));
    printf("POPPED ELEMENT IS %d\n",pop(top));
    printf("POPPED ELEMENT IS %d\n",pop(top));
    // printf("POPPED ELEMENT IS %d\n",pop(top));
    // printf("POPPED ELEMENT IS %d\n",pop(top));
    // printf("POPPED ELEMENT IS %d\n",pop(top));
    // printf("POPPED ELEMENT IS %d\n",pop(top));
    // printf("POPPED ELEMENT IS %d\n",pop(top));
    // printf("POPPED ELEMENT IS %d\n",pop(top));
    // traversal(top);
    for (int i = 1; i < 9; i++) {
        if(peek(i)==-1){
            printf("ELEMENT ALREADY POPPED\n");
        }
        else{
        printf("Value at %d postion is %d\n",i,peek(i));
   }
    }
    printf("%d is the top ELEMENT",stackTop());
    return 0;

}