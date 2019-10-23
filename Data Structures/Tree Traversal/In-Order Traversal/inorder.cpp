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

// INORDER Traversal
void printInorder(struct Node *node)
{
    if (node == NULL)
        return;
    printInorder(node->left);  // recur on left child
    cout << node->data << " "; // print value
    printInorder(node->right); // recur on right child
}

// MAIN
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);

    return 0;
}
