#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *left, *right;
};

Node* newnode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* solve(int a[], int start, int end)
{
    if(start>end)   return NULL;
    int mid = (start + end)/2;
    Node* root = newnode(a[mid]);
    root->left = solve(a, start ,mid-1);
    root->right = solve(a, mid+1, end);
    return root;
}

void print(Node* root)
{
    cout << "Following is one of the possible height balanced BST\n";
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* node = q.front();
        q.pop();
        if(node)
        {
            cout << node->data << " ";
            if(node->left || node->right)
            {
                q.push(node->left);
                q.push(node->right);
            }
        }
        else
            cout << "null ";
    }
}

int main()
{
    int n, i, j;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Node* root = solve(a,0,n-1);
    print(root);
    return 0;
}
