#include <stdio.h>
#include<stdlib.h>
//#include<string.h>
typedef struct node
{
  int data;
  struct node *next;
} N;
//TRAVERSAL
void traversal (N * ptr)
{
  while (ptr != NULL)
    {
      printf ("Element is:%d\n", ptr->data);
      ptr = ptr->next;
    }
}
//INSERTION
// 1)At First...
N * atFirst(N* first,int data){
    
    N* ptr=(N*)malloc(sizeof(N));
    ptr->data=data;
    ptr->next=first;
    
    return ptr;
    
    
}
// 2)At End...
N * atEnd(N* first,int data){
    
    N* ptr=(N*)malloc(sizeof(N));
    ptr->data=data;
    N* p=first;
    while (p->next != NULL)
    {
      p = p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return first;
    
    return ptr;
    
    
}
// 3)At Index...
N * atIndex(N*first,int data,int index){
 N* ptr=(N*)malloc(sizeof(N));
 N*p=first;
 int i=0;
 while(i!=index-1){
     p=p->next;
     i++;
 }
 ptr->data=data;
 ptr->next=p->next;
 p->next=ptr;
 return first;
}
// 4)At Any Node...
N * atNode(N*first,int data,N* nodee){
 N* ptr=(N*)malloc(sizeof(N));
 ptr->data=data;
 ptr->next=nodee->next;
 nodee->next=ptr;
 return first;
}
//DELETING
//AT FIRST
N* delatfirst(N*first)
{
    N*ptr=first;
    first=first->next;
    free(ptr);
    return first;
    
}
//AT END
N*delatend(N*first)
{
    N*ptr=first;
    N*p=first->next;
    while(p->next!=NULL)
    {
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=NULL;
    free(p);
    return first;
}

//AT INDEX
N*delatindex(N*first,int index)
{
    N*ptr=first;
    N*p=first->next;
    for(int i=0;i<index-1;i++)
    {
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=p->next;
    free(p);
    return first;
}
//AT NODE
N*delatnode(N*first,int value)
{
    N*ptr=first;
    N*p=first->next;
    while(p->data!=value&&p->next!=NULL)
    {
        ptr=ptr->next;
        p=p->next;
    }
    if(p->data==value)
    {ptr->next=p->next;
    free(p);}
    return first;
}
int main ()
{
  N *first = (N *) malloc (sizeof (N));
  N *second = (N *) malloc (sizeof (N));
  N *third = (N *) malloc (sizeof (N));
  N *fourth = (N *) malloc (sizeof (N));
  N *fifth = (N *) malloc (sizeof (N));

  first->data = 1;
  first->next = second;
  second->data = 2;
  second->next = third;
  third->data = 3;
  third->next = fourth;
  fourth->data = 4;
  fourth->next = fifth;
  fifth->data = 5;
  fifth->next = NULL;
  traversal (first);
  first=atFirst(first,0/*data*/);
  first=atIndex(first,99,4);
  first=atEnd(first,6);
  first=atNode(first,66/*data*/,second/*node*/);
  printf("\nAFTER INSERTION\n\n");
  traversal (first);
  first=delatnode(first,66/*value*/);
  first=delatindex(first,4/*data*/);
  first=delatend(first);
  first=delatfirst(first);
  printf("\nAFTER DELETION\n\n");
  traversal (first);
  return 0;
}

