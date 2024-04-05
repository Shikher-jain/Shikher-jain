#include <stdio.h>
#include<stdlib.h>
//#include<string.h>
typedef struct node
{
  int data;
  struct node *next;
} N;
//TRAVERSAL
void traversal (N * head)
{
  N* ptr=head;
  do{
      printf ("Element is:%d\n", ptr->data);
      ptr = ptr->next;
    }
    while(ptr!=head);
}
//INSERTION
// 1)At head...
N * athead(N* head,int data){
    
    N* ptr=(N*)malloc(sizeof(N));
    ptr->data=data;
    N* p=head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
    
    
}
// 2)At End...
N * atEnd(N* head,int data){
    
    N* ptr=(N*)malloc(sizeof(N));
    ptr->data=data;
    N* p=head;
    while (p->next != head)
    {
      p = p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
    return ptr;
}
// 3)At Index...
N * atIndex(N*head,int data,int index){
 N* ptr=(N*)malloc(sizeof(N));
 N*p=head;
 int i=0;
 while(i!=index-1){
     p=p->next;
     i++;
 }
 ptr->data=data;
 ptr->next=p->next;
 p->next=ptr;
 return head;
}
// 4)At Any Node...
N * atNode(N*head,int data,N* nodee){
 N* ptr=(N*)malloc(sizeof(N));
 ptr->data=data;
 ptr->next=nodee->next;
 nodee->next=ptr;
 return head;
}
//DELETING
//AT head
N* delathead(N*head)
{
    N*ptr=head;
    head=head->next;
    free(ptr);
    return head;
    
}
//AT END
N*delatend(N*head)
{
    N*ptr=head;
    N*p=head->next;
    do
    {
        p=p->next;
        ptr=ptr->next;
    }
    while(p->next!=head);
    ptr->next=NULL;
    free(p);
    return head;
}

//AT INDEX
N*delatindex(N*head,int index)
{
    N*ptr=head;
    N*p=head->next;
    for(int i=0;i<index-1;i++)
    {
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=p->next;
    free(p);
    return head;
}
//AT NODE
N*delatnode(N*head,int value)
{
    N*ptr=head;
    N*p=head->next;
    while(p->data!=value&&p->next!=NULL)
    {
        ptr=ptr->next;
        p=p->next;
    }
    if(p->data==value)
    {ptr->next=p->next;
    free(p);}
    return head;
}
int main ()
{
  N *head = (N *) malloc (sizeof (N));
  N *second = (N *) malloc (sizeof (N));
  N *third = (N *) malloc (sizeof (N));
  N *fourth = (N *) malloc (sizeof (N));
  N *fifth = (N *) malloc (sizeof (N));

//DATA ENTRY...
  head->data = 1;
  head->next = second;
  second->data = 2;
  second->next = third;
  third->data = 3;
  third->next = fourth;
  fourth->data = 4;
  fourth->next = fifth;
  fifth->data = 5;
  fifth->next = head;
  
  printf("\nBEFORE:\n\n");
  traversal (head);
  head=athead(head,0/*data*/);
  head=atIndex(head,99,4);
  head=atEnd(head,6);
  head=atNode(head,66/*data*/,second/*node*/);
  
  printf("\nAFTER INSERTION\n\n");
  traversal (head);
  head=delatnode(head,66/*value*/);
  head=delatindex(head,4/*data*/);
  head=delatend(head);
  head=delathead(head);
  
  printf("\nAFTER DELETION\n\n");
  traversal (head);
  return 0;
}