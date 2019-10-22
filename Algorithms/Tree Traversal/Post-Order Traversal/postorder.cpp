// Prg for tree traversals in C++
#include <iostream>
using namespace std;

// A class for a node
struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};


// POSTORDER Traversal
void printPostorder(struct Node *node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);  // recur on left child
    printPostorder(node->right);  // recur on right child
    cout << node->data << " ";  // print value
}


// MAIN
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);

    return 0;
}
