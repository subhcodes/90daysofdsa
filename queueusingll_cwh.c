#include <stdio.h>
#include <stdlib.h>

struct node *f = NULL;
struct node *r = NULL;
struct node
{
    int data;
    struct node *next;
};

void transversal(struct node *ptr)
{
    printf("PRINTING ELEMENTS OF : \n");
    while (ptr!= NULL)
    {
        printf("ELEMENT IS : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int dequeue()
{
  int val = -1;
  struct node *n = f;
  if(f == NULL) 
  {
    printf("Queue is Empty\n");
  }
  else
  {
    f = f->next;
    val = n->data;
    free(n);
  }
  return val;
}

void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("QUEUE IS FULL\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int main()
{
    transversal(f);
    printf("DEQUEUE ELEMENTS ARE : %d\n",dequeue());
    enqueue(34);
    enqueue(90);
    enqueue(76);
    //transversal(f);
    return 0;
}