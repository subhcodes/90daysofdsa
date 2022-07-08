#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int d)
  {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *insertintobst(Node* root, int d)
{
  // base case
  if (root == NULL)
  {
    root = new Node(d);
    return root;
  }
  if (d > root->data)
  {
    root->right = insertintobst(root->right, d);
  }
  else
  {
    root->left = insertintobst(root->left, d);
  }
  return root;
}

void takeinput(Node *root)
{
  int data;
  cin >> data;
  while (data != -1)
  {
    insertintobst(root, data);
    cin >> data;
  }
}

void levelordertraversal(Node *root)
{
  queue<Node *> q;
  q.push(root);
  q.push(NULL); // separater

  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();

    if (temp == NULL) // all elements of that level is traversed
    {
      cout << endl;
      if (!q.empty()) // if element bach jata hai toh ek aur null chaiye hoga na
      {
        q.push(NULL);
      }
    }
    else
    {
      cout << temp->data << " ";
      if (temp->left)
      {
        q.push(temp->left);
      }
      if (temp->right)
      {
        q.push(temp->right);
      }
    }
  }
}

void inorder(Node *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }
  inorder(root->left);       // L
  cout << root->data << " "; // N
  inorder(root->right);      // R
}

void preorder(Node *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " "; // N
  preorder(root->left);      // L
  preorder(root->right);     // R
}

void postorder(Node *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }
  postorder(root->left);     // L
  postorder(root->right);    // R
  cout << root->data << " "; // N
}

Node *minval(Node *root)
{
  Node *temp = root;
  while (temp->left != NULL)
  {
    temp = temp->left;
  }
  return temp;
}

Node *maxval(Node *root)
{
  Node *temp = root;
  while (temp->right != NULL)
  {
    temp = temp->right;
  }
  return temp;
}

Node *deletefrombst(Node *root, int val)
{
  if (root == NULL)
  {
    return root;
  }
  if (root->data == val)
  {
    // 0 child
    if (root->left == NULL && root->right == NULL)
    {
      delete root;
      return NULL;
    }

    // 1 child
    // left child
    if (root->left != NULL && root->right == NULL)
    {
      Node *temp = root->left;
      delete root;
      return temp;
    }
    // right child
    if (root->right != NULL && root->left == NULL)
    {
      Node *temp = root->right;
      delete root;
      return temp;
    }

    // 2 child
    if (root->left != NULL && root->right != NULL)
    {
      int mini = minval(root->right)->data;
      root->data = mini;
      root->right = deletefrombst(root->right,mini);
      return root;
    }
  }
  else if (root->data > val)
  {
    root->left = deletefrombst(root->left, val);
    return root;
  }
  else if (root->data < val)
  {
    root->right = deletefrombst(root->right, val);
    return root;
  }
}

int main()
{
  //Node *root = NULL;
  Node *root = new Node(11);
  cout << "Enter data to create BST " << endl;
  takeinput(root);
  // 50 20 70 10 30 90 110 -1
  cout << "BST : " << endl;
  levelordertraversal(root);
  cout << "INORDER TRAVERSAL : " << endl;
  inorder(root);
  cout << endl
       << "PREORDER TRAVERSAL : " << endl;
  preorder(root);
  cout << endl
       << "POSTORDER TRAVERSAL : " << endl;
  postorder(root);

  cout << "\nMINIMUM VALUE IN BST : " << minval(root)->data << endl;
  cout << "MAXIMUM VALUE IN BST : " << maxval(root)->data << endl;

  root = deletefrombst(root, 50);
  cout<<"AFTER DELETION : "<<endl;
  cout << "BST : " << endl;
  levelordertraversal(root);

  return 0;
}
