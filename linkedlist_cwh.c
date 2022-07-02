#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

void lltraversal(struct node *ptr)
{
  while(ptr!=NULL)
  {
    printf("Elements are : %d\n",ptr->data);
    ptr = ptr->next;
  }
}

void rearrange(struct node*ptr)
{
  struct node *p = ptr;
  struct node *q = ptr->next;
  struct node *w = ptr;
  struct node *t = ptr->next;
  while(q->next!=NULL)
  {
    p = p->next;
    q = q->next;
  }
   t->next = NULL;
   w->next = q;
}

int main()
{
  struct node*head;
  struct node*second;
  struct node*third;
  struct node*fourth;
  struct node* fifth;

  //Allocate the memory for nodes in the linked list in heap
  head = (struct node*)malloc(sizeof(struct node));
  second = (struct node*)malloc(sizeof(struct node));
  third = (struct node*)malloc(sizeof(struct node));
  fourth = (struct node*)malloc(sizeof(struct node));
  fifth = (struct node*)malloc(sizeof(struct node));

  //linking the nodes
  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = fourth;

  fourth->data = 4;
  fourth->next = fifth;

  fifth->data = 5;
  fifth->next = NULL;

  lltraversal(head);  // sending head pointer as arguement
  printf("AFTER rearrange :\n");
  rearrange(head);
  lltraversal(head);
  return 0;
}
