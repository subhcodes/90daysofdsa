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

struct node* insertatfirst(struct node*head ,int data)
{
   struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;  // new head;
}

struct node* insertatindex(struct node*head,int data,int index)
{
  struct node* ptr = (struct node*)malloc(sizeof(struct node));
  struct node*p = head;
  int i = 0;
  while (i!=index-1)
  {
    p = p->next;
    i++;
  }
  ptr->data = data;
  ptr->next = p->next;
  p->next = ptr;
  return head;
}

struct node* insertatend(struct node*head,int data)
{
  struct node* ptr = (struct node*)malloc(sizeof(struct node));
  ptr->data = data;
  struct node*p = head;

  while(p->next != NULL)
  {
     p = p->next;
  }
  p->next = ptr;
  ptr->next = NULL;
  return head;
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

  lltraversal(head);  // sending head pointer as arguement
  //head = insertatfirst(head,33) ; // new head insert at first
  //head = insertatindex(head,23,2); // random insert
  head = insertatend(head,122);
  printf("NEW HEAD \n");
  lltraversal(head);    //updated list;

  return 0;
}
