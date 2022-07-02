#include<stdio.h>
#include<stdlib.h>

struct queue
{
  int size;
  int f;
  int r;
  int *arr;
};

int isFull(q)
{
  if(q->r == q->size - 1)
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

void enqueue(struct queue *ptr,int val)
{
  if(isFull(q))
  {
    printf("full\n");
  }
  else
  {
    q->r++;
    q->arr[q->r] = val;
  }
}

int main()
{
  struct queue q;
  q.size = 100;
  q.f = q.r = -1;
  q.arr = (int*)malloc(q.size * sizeof(int));

  if(isEmpty(q))
  {
    printf("empty");
  }
  //enqueue elements
  enqueue(&q,12);
  enqueue(&q,15);
  enqueue(&q,13);
  enqueue(&q,24);
  return 0;
}
