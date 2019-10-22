// Prg for tree traversals
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// AClass for a node
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Allocation of New Node
struct node *newNode(int data)
{
    struct node *node = (struct node *)
        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}


// POSTORDER Traversal
void printPostorder(struct node *node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);  // recur on left child
    printPostorder(node->right); // recur on right child
    printf("%d ", node->data);   // print value
}


// MAIN
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("\nPostorder traversal of binary tree is: \n");
    printPostorder(root);

    return 0;
}
