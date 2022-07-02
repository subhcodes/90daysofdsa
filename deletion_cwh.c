#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* next;
} ;

struct node* deletionatfirst(struct node*head)
{
//  struct node *p = (struct node*)malloc(sizeof(struct node));
  struct node *p = head;
  head = head->next;
  free(p);
  return head;
}

struct node*deletionatindex(struct node*head,int index)
{
  struct node*p = head;
  struct node*q = head->next;
  for(int i = 0 ; i<index-1 ; i++)
  {
    p = p->next;
    q = q->next;
  }
  p->next = q->next;
  free(q);
  return head;
}

struct node*deletionatend(struct node*head)
{
  struct node*p = head;
  struct node*q = head->next;
  while(q->next != NULL)
  {
    p = p->next;
    q = q->next;
  }
  p->next = NULL;
  free(q);
  return head;
}

void lltraversal(struct node *ptr)
{
  while(ptr!=NULL)
  {
    printf("Elements are : %d\n",ptr->data);
    ptr = ptr->next;
  }
}


int main()
{
  struct node*head;
  struct node*second;
  struct node*third;
  struct node*fourth;

  //Allocate the memory for nodes in the linked list in heap
  head = (struct node*)malloc(sizeof(struct node));
  second = (struct node*)malloc(sizeof(struct node));
  third = (struct node*)malloc(sizeof(struct node));
  fourth = (struct node*)malloc(sizeof(struct node));

  //linking the nodes
  head->data = 7;
  head->next = second;
  second->data = 13;
  second->next = third;
  third->data = 51;
  third->next = fourth;
  fourth->data = 67;
  fourth->next = NULL;

  //head = deletionatfirst(head);
  //head = deletionatindex(head,2);
  head = deletionatend(head);
  lltraversal(head);
  return 0;
}
