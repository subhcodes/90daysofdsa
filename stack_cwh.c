#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* next;
};

struct node* top = NULL;

int isempty(struct node* top)
{
  if(top == NULL)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int isfull(struct node* top)
{
   struct node *p = (struct node*)malloc(sizeof(struct node));
   if(p==NULL)
   {
     return 1;
   }
   else
   return 0;
}

void lltraversal(struct node *ptr)
{
  while(ptr!=NULL)
  {
    printf("Elements are : %d\n",ptr->data);
    ptr = ptr->next;
  }
}

int pop(struct node* tp)
{
  if(isempty(tp))
  {
    printf("Underflow");
  }
  else{
    struct node*n = tp;
    top = tp->next;
    int x = n->data;
    free(n);
    return x;
  }
}

struct node* push(struct node* top,int x)
{
  if(isfull(top))
  {
    printf("STACK OVERFLOW");
  }
  else{
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = x;
    n->next = top;
    top = n;
  }
}

int peek(int pos)
{
  struct node *ptr = top;
  for(int i = 0; (i<pos-1 && ptr!=NULL);i++)
  {
    ptr = ptr->next;
  }
  if(ptr!=NULL)
  {
    return ptr->data;
  }
  else
  {
    return -1;
  }
}

int main()
{
   top = push(top,45);
   top = push(top,78);
   top = push(top,8);
   top = push(top,7);
   lltraversal(top);
   //int element = pop(top);
   //printf("POP ELEMENT : %d",element);
   //printf("\nValue at position 1 is : %d",peek(0));
   for(int i = 1 ; i<=4 ; i++)
   {
     printf("Value at position %d is : %d\n",i,peek(i));
   }
   return 0;
}
