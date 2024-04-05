#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct node{
    int cof;
    int exp;
    struct node *link;
}N;
N * create(N*q){
  int i,n;
  printf("enter the number of nodes");
  scanf("%d",&n);
  N*ptr=(N*)malloc (sizeof(N));
  for(i=0;i<n;i++){
    printf("entre the coefficient and exponent respectivly");
    scanf("%d%d",&ptr->cof,&ptr->exp);
    ptr->link=NULL;
    q= insert(ptr,q);
  }
  return q;
 }
 N* insert(N *ptr,N *p)
 {
  struct node *temp,*b;
  if(p==NULL)
  p=ptr;
  else{
      if((p->exp)<(ptr->exp){
        ptr->link=p;
        p=ptr;
      }
      else{
          temp=p;
          while((temp!=NULL)||((temp->link->exp)<(ptr->exp)))
          temp=temp->link;
          b=temp->link;
          temp->link=ptr;
          ptr->link=b;
      }
  }
  return p;
  }
void display(struct node *ptr){
   struct node *temp;
  temp=ptr;
  while(temp!=NULL){
    printf("%d x ^ %d + ",temp->cof,temp->exp);
    temp=temp->link;
    }
 }
 int main(){
  printf("enter the first polynomial");
  N  *p1=NULL,*p2=NULL; 
  p1=(N*)malloc(sizeof(N));
  p2=(N*)malloc(sizeof(N));
  p1=create(p1);
  printf("enter second polynimial");
  create(p2);
  display(p1);
  display(p2);
  getch();
  return 0;
 }
