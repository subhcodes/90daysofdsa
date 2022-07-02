#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node * insertionatfirst(struct node*head,int data)
{
  struct node*ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data = data;
  struct node*p = head->next;
  while(p->next != head)
  {
    p = p->next;
  }
  // at this point . p points to last node of cll
  p->next = ptr;
  ptr->next = head;
  head = ptr;
  return head;
}

void lltraversal(struct node *head)
{
  struct node*ptr = head;
  do
  {
    printf("Element is : %d\n",ptr->data);
    ptr = ptr->next;
  } while(ptr->next != head);

  printf("Element is : %d\n",ptr->data );
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
  fourth->next = head;

  head = insertionatfirst(head,88);
  lltraversal(head);

  return 0;
}
