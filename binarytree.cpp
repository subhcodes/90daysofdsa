#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data); // constructor called too
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for insertion in left of " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter data for insertion in right of " << data << endl;
    root->right = buildtree(root->right);
    return root;
}

void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // separater

    while (!q.empty())
    {
        node *temp = q.front();
        // cout << temp->data << " " << endl;
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
int main()
{
    node *root = NULL;

    // Creating a Tree
    root = buildtree(root);

    // level order
    cout << "LEVEL ORDER TRAVERSAL : " << endl;
    levelordertraversal(root);
    return 0;
}
