//Finding Height of Binary Search Tree

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int info;
	struct node *lchild;
	struct node *rchild;
};

//Insertion in binary search tree
struct node *insert_bs( struct node *root , int data)
{
	//Creation of node
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->info = data;
	temp->rchild = NULL;
	temp->lchild = NULL;

    if(root == NULL)
    	return temp;
    struct node *parent = NULL , *curr = root;
    while(curr != NULL)
    {
      parent = curr;
      if(curr->info < data)
        curr = curr->rchild;
      else if(curr->info > data)
       curr = curr->lchild;  
    }
    if(parent->info < data)
    	parent->rchild = temp;
    else if(parent->info > data)
    	parent->lchild = temp;
    return  root;
}

//Inorder Traversal - For printing binary search tree - Should be in Ascending Order 
void inorder(struct node *ptr)
{
  if(ptr == NULL)
    return;
  inorder(ptr->lchild);
  cout<<ptr->info<<" ";
  inorder(ptr->rchild);
}

//Recursive Function for calculating Height of Binary Search Tree
int height (struct node *ptr)
{
  if(ptr == NULL)
    return 0;
  return 1+max(height(ptr->lchild),height(ptr->rchild));
}

int main()
{
   int t ;     //t is number of nodes
   cout<<"Enter number of nodes "<<endl;
   cin>>t;   
   struct node *root = NULL ;
   cout<<"Enter values of nodes"<<endl;
   while(t--)
   {
     int n;     //n is value of node
     cin>>n;
     root = insert_bs(root , n);
   }

   //For printing constructed binary Tree uncomment "inorder" function
   // inorder(root);    
   // cout<<endl;
   
   cout<<"Height of given Binary Search Tree is "<<height(root)<<endl;
}