
#include<stdio.h>
#include<stdlib.h>

struct queue
{
  int size;
  int f;
  int r;
  int *arr;
};

int isFull(struct queue *q)
{
  if(q->r == q->size-1)
  {
    return 1;
  }
  return 0;
}

int isEmpty(struct queue *q)
{
  if(q->r == q->f)
  {
    return 1;
  }
  return 0;
}

void enqueue(struct queue *q,int val)
{
  if(isFull(q))
  {
    printf("full\n");
  }
  else
  {
    q->r++;
    q->arr[q->r] = val;
    printf("ENQUEUED ELEMENT : %d\n",val);
  }
}

int dequeue(struct queue *q)
{
  int a = -1;
  if(isEmpty(q))
  {
    printf("empty\n");
  }
  else
  {
    q->f++;
    a = q->arr[q->f];
  }
   return a;
}

int main()
{
  struct queue q;
  q.size = 2;
  q.f = q.r = -1;
  q.arr = (int*)malloc(q.size * sizeof(int));

  //enqueue elements
  enqueue(&q,12);
  enqueue(&q,15);
  printf("DEQUEUE ELEMENT : %d\n",dequeue(&q));
  //printf("DEQUEUE ELEMENT : %d\n",dequeue(&q));

  if(isEmpty(&q))
  {
    printf("queue is empty\n");
  }

  else if(isFull(&q))
  {
    printf("queue is Full\n");
  }

  return 0;
}
