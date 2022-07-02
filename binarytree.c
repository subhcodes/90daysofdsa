#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    // Allocating the memory dynamic
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;  // setting data
    n->left = NULL;  // children left
    n->right = NULL; // children right
    return n;
}

int main()
{
    /* Constructing the root node
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = 1;
    p->left = NULL;
    p->right = NULL;

    // Constructing the 2nd node
    struct node *p1 = (struct node *)malloc(sizeof(struct node));
    p1->data = 2;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the 3rd Node
    struct node *p2 = (struct node *)malloc(sizeof(struct node));
    p1->data = 3;
    p2->left = NULL;
    p2->right = NULL;

    // linking the nodes
    p->left = p1;
    p->right = p2; */

    struct node *p = createnode(1);
    struct node *p1 = createnode(2);
    struct node *p2 = createnode(3);
    p->left = p1;
    p->right = p2;

    return 0;
}