
#include<bits/stdc++.h> 
  
using namespace std; 
struct Node 
{ 
    int key; 
    Node *left, *right; 
}; 
  
Node* newNode(int key) 
{ 
    Node* node = new Node; 
    node->key = key; 
    node->left = node->right = NULL; 
    return node; 
} 
   
void printVerticalOrder(Node* root) 
{  
    if (!root) 
        return;  
    map < int,vector<int> > m; 
    int hd = 0; 
 
    queue<pair<Node*, int> > que; 
    que.push(make_pair(root, hd)); 
  
     while (!que.empty()) 
     { 
        pair<Node *,int> temp = que.front(); 
        que.pop(); 
        hd = temp.second; 
        Node* node = temp.first; 
  
        m[hd].push_back(node->key); 
  
        if (node->left != NULL) 
            que.push(make_pair(node->left, hd-1)); 
        if (node->right != NULL) 
            que.push(make_pair(node->right, hd+1)); 
    } 
  
    map< int,vector<int> > :: iterator it; 
    for (it=m.begin(); it!=m.end(); it++) 
    { 
        for (int i=0; i<it->second.size(); ++i) 
            cout << it->second[i] << " "; 
        cout << endl; 
    } 
} 
 
int main() 
{ 
    Node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    root->right->left->right = newNode(8); 
    root->right->right->right = newNode(9); 
    root->right->right->left= newNode(10); 
    root->right->right->left->right= newNode(11); 
    root->right->right->left->right->right= newNode(12); 
    cout << "Vertical order traversal is \n"; 
    printVerticalOrder(root); 
    return 0; 
} 