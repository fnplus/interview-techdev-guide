#include<bits/stdc++.h>  
#include<iostream> 
using namespace std;  
  
/* A binary tree node has data, 
pointer to left child and  
a pointer to right child */
class node  
{  
    public: 
    int data;  
    node* left;  
    node* right;  
      
    /* Constructor that allocates  
    a new node with the given data 
    and NULL left and right pointers. */
    node(int data) 
    { 
        this->data = data;  
        this->left = NULL;  
        this->right = NULL;  
    } 
};  
  
  
/* This function traverses tree  
in post order to delete each  
and every node of the tree */
void deleteTree(node* node)  
{  
    if (node == NULL) return;  
  
    /* first delete both subtrees */
    deleteTree(node->left);  
    deleteTree(node->right);  
      
    /* then delete the node */
    cout << "\n Deleting node: " << node->data;  
    free(node);  
}  
  
  
/* Driver code*/
int main()  
{  
    node *root = new node(1);  
    root->left     = new node(2);  
    root->right     = new node(3);  
    root->left->left = new node(4);  
    root->left->right = new node(5);  
      
    deleteTree(root);  
    root = NULL;  
  
    cout << "\n Tree deleted ";  
      
    return 0;  
}  
  
//This code is contributed b