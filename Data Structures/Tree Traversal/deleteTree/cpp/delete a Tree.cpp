#include<bits/stdc++.h>  
#include<iostream> 
using namespace std;  

class node  
{  
    public: 
    int data;  
    node* left;  
    node* right;  
    node(int data) 
    { 
        this->data = data;  
        this->left = NULL;  
        this->right = NULL;  
    } 
};  
  
  
void deleteTree(node* node)  
{  
    if (node == NULL) return;  
  
    deleteTree(node->left);  
    deleteTree(node->right);  
      
    cout << "\n Deleting node: " << node->data;  
    free(node);  
}  
  
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
  
