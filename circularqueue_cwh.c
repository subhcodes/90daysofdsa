
#include<stdio.h>
#include<stdlib.h>

struct circularqueue
{
  int size;
  int f;
  int r;
  int *arr;
};

int isFull(struct circularqueue *q)
{
  if((q->r+1)%q->size == q->f)
  {
    return 1;
  }
  return 0;
}

int isEmpty(struct circularqueue *q)
{
  if(q->r == q->f)
  {
    return 1;
  }
  return 0;
}

void enqueue(struct circularqueue *q,int val)
{
  if(isFull(q))
  {
    printf("full\n");
  }
  else
  {
    q->r = (q->r+1)%q->size;
    q->arr[q->r] = val;
    printf("ENQUEUED ELEMENT : %d\n",val);
  }
}

int dequeue(struct circularqueue *q)
{
  int a = -1;
  if(isEmpty(q))
  {
    printf("empty\n");
  }
  else
  {
    q->f = (q->f+1)%q->size;
    a = q->arr[q->f];
  }
   return a;
}

int main()
{
  struct circularqueue q;
  q.size = 4;
  q.f = q.r = 0;
  q.arr = (int*)malloc(q.size * sizeof(int));

  //enqueue elements
  enqueue(&q,12);
  enqueue(&q,15);
  enqueue(&q,54);
  enqueue(&q,33);
  //dequeue elements 
  printf("DEQUEUE ELEMENT : %d\n",dequeue(&q));
  printf("DEQUEUE ELEMENT : %d\n",dequeue(&q));
  printf("DEQUEUE ELEMENT : %d\n",dequeue(&q));
  //printf("DEQUEUE ELEMENT : %d\n",dequeue(&q));
  enqueue(&q,45);
  //enqueue(&q,66);
  //enqueue(&q,5);
  //enqueue(&q,4);

  if(isEmpty(&q))
  {
    printf("queue is empty\n");
  }

  if(isFull(&q))
  {
    printf("queue is Full\n");
  }

  return 0;
}
