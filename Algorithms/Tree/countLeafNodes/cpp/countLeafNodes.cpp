#include <iostream> 
using namespace std; 
  
struct node  
{  
    int data;  
    struct node* left;  
    struct node* right;  
};  
  
unsigned int getLeafCount(struct node* node)  
{  
    if(node == NULL)      
        return 0;  
    if(node->left == NULL && node->right == NULL)  
        return 1;          
    else
        return getLeafCount(node->left)+  getLeafCount(node->right);  
}  
  
struct node* newNode(int data)  
{  
    struct node* node = (struct node*)  
                    malloc(sizeof(struct node));  
    node->data = data;  
    node->left = NULL;  
    node->right = NULL;  
      
return(node);  
}  
  
int main()  
{  
    struct node *root = newNode(1);  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
      
cout << "Leaf count of the tree is : "<<  
                getLeafCount(root) << endl;  
return 0;  
}  