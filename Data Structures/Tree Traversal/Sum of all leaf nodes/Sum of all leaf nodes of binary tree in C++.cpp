 
#include<bits/stdc++.h> 
using namespace std; 
  
struct Node{ 
    int data; 
    Node *left, *right; 
}; 
   
Node *newNode(int data){ 
    Node *temp = new Node(); 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
   
void leafSum(Node *root, int *sum){ 
    if (!root) 
        return; 
  
    if (!root->left && !root->right) 
        *sum += root->data; 
    leafSum(root->left, sum); 
    leafSum(root->right, sum); 
} 
  
int main(){ 
      
    Node *root = newNode(1); 
    root->left = newNode(2); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right = newNode(3); 
    root->right->right = newNode(7); 
    root->right->left = newNode(6); 
    root->right->left->right = newNode(8); 
    int sum = 0; 
    leafSum(root, &sum); 
    cout << sum << endl; 
    return 0; 
} 
