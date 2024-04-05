#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
   int size;
   int top;
   char* arr;
}S;
int empty(S*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int full(S*ptr){
    if(ptr->top==ptr->size-1){
        return 1; 
    }
    else{
        return 0;
    }
}
void push(S*ptr,char val){
    if(full){
        printf("STACK OVERFLOW\n");
    }
     {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(S*ptr){
    if(empty(ptr)){
        printf("STACK UNDERFLOW\n");
        return -1;
    }
    else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parenthesisCheck(char* eq){
  S* ptr;
  ptr->size=100;
  ptr->top=-1;
  ptr->arr=(char*)malloc(ptr->size * sizeof(char));
  int i=0;
  while(eq[i]!='\0')/*for(int i=0;eq[i]!='\0';i++)*/{
      if(eq[i]=='('){
          push(ptr,'(');
          i++;
      }
      else if (eq[i]==')'){
          if(empty(ptr)){
              return 0;
          }
          pop(ptr);
      }
    }
    if(empty(ptr)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char* eq/*EQUATION*/="34+55/(45*(44-(3+5)";
    printf("EQUATION IS = ");
    printf("%s\n",eq);
    if(parenthesisCheck(eq)){
        printf("BALANCED EQUATION\n");
    }
    else{
        printf("UNBALANCED EQUATION\n");
    }
    return 0;
}