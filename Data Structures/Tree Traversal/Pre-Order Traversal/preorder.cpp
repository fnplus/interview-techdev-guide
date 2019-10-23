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

// PREORDER Traversal
void printPreorder(struct Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";  // print value
    printPreorder(node->left);  // recur on left child
    printPreorder(node->right); // recur on right child
}

// MAIN
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);
    return 0;
}
