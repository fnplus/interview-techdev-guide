

#include <iostream>
using namespace std;

// Functions for inserting an element in the tree
// and creating the tree by calling insert method repetadly
struct node *insert(node *, int );
struct node *create(node *);

// Function for RR rotation
struct node *RRrotation(node *);

// Function for LL rotation
struct node *LLrotation(node *);

// Function for traversing the tree
void inorderTraversal(node *);

// Function for finding height of the tree
int avlHeight(node *);

// Function for finding the maximum value
int max(int , int);

// Functon for getting the Balance Factor of the avl tree
// i.e., left height - right height
int getBalanceFactor(node *);


/*
Declaring a structure called node
having four members:
  1) left block (which stores the address of the left node)
  2) right block (which stores the address of the right node)
  3) data block (which stores the value)
  4) height block (which stores the height of the tree)
 */

struct node {
  node *left;
  node *right;
  int data;
  int height;
};


// Function for finding the height of the tree
// If tree is empty return 0, otherwise return height of the tree
int avlHeight(node *tree) {
  if(tree == NULL) {
    return 0;
  }
  else {
    return tree->height;
  }
}


// Function for finding the max value
int max(int a, int b) {
  return (a > b) ? a : b;
}

// Function to calculate the balance factor of a node
// Balance factor = left height - right height
int getBalanceFactor(node *tree) {
  if(tree == NULL) {
    return 0;
  }

  return avlHeight(tree->left) - avlHeight(tree->right);
}

// ALGORITHM FOR LL ROTATION
node *LLrotation(node *x) {
  node *y = x->right;
  node *T2 = y->left;

  y->left = x;
  x->right = T2;

  x->height = max(avlHeight(x->left), avlHeight(x->right)) + 1;
  y->height = max(avlHeight(y->left), avlHeight(y->right)) + 1;

  return y;
}

// ALGORITHM FOR RR ROTATION
node *RRrotation(node *y) {
  node *x = y->left;
  node *T2 = x->right;

  x->right = y;
  y->left = T2;

  x->height = max(avlHeight(x->left), avlHeight(x->right)) + 1;
  y->height = max(avlHeight(y->left), avlHeight(y->right)) + 1;

  return x;
}


/*
ALGORITHM TO INSERT AN ELEMENT IN THE TREE:
  1) IF AVAIL = NULL
        WRITE Overflow
        EXIT
  2) NEW_NODE = AVAIL
  3) AVAIL = AVAIL -> LEFT
  4) NEW_NODE -> DATA = VALUE
  5) NEW_NODE -> LEFT = NULL
  6) NEW_NODE -> RIGHT = NULL
  7) NEW_NODE -> HEIGHT = 1
  8) IF TREE = NULL
        RETRUN NEW_NODE
  9) IF VALUE < TREE -> DATA
        TREE -> LEFT = RECURSIVE CALL PASSING TREE -> LEFT & VALUE
  10) ELSE IF VALUE > TREE -> DATA
        TREE -> RIGHT = RECURSIVE CALL PASSING TREE -> RIGHT & VALUE
  11) ELSE
        RETURN TREE
  12) TREE -> HEIGHT = MAX(HEIGHT OF TREE -> LEFT, HEIGHT OF TREE -> RIGHT) + 1
  13) BALANCE_FACTOR = GET BALANCE FACTOR PASSING TREE
  14) IF BALANCE_FACTOR > 1 && VALUE < TREE -> LEFT -> DATA
        RETURN RRrotation(TREE);
  15) IF BALANCE_FACTOR < -1 && VALUE > TREE -> RIGHT -> DATA
        RETURN LLrotation(TREE);
  16) IF BALANCE_FACTOR > 1 && VALUE > TREE -> LEFT -> DATA
        TREE -> LEFT = LLrotation(TREE -> LEFT)
        RETURN RRrotation(TREE);
  17) IF BALANCE_FACTOR < -1 && VALUE < TREE -> RIGHT -> DATA
        TREE -> RIGHT = RRrotation(TREE -> RIGHT)
        RETURN LLrotation(TREE);
  18) RETURN TREE
  19) EXIT
*/

node *insert(node *tree, int value) {
  // Alocating space for a new node
  node *new_node = new node;

  // Storing data in new node
  new_node->data = value;
  new_node->left = NULL;
  new_node->right = NULL;
  new_node->height = 1;

  // When node is empty
  if(tree == NULL) {
    return new_node;
  }

  // When the value to be inserted is less then tree -> data
  if(value < tree->data) {
    tree->left = insert(tree->left, value);
  }
  // When the value to be inserted is greater then tree -> data
  else if(value > tree->data) {
    tree->right = insert(tree->right, value);
  }
  // When the value to be inserted is equal to tree -> data
  else {
    return tree;
  }

  // Calculating the height of the tree
  tree->height = max(avlHeight(tree->left), avlHeight(tree->right)) + 1;

  // Calculating the balance factor of the tree
  int balanceFactor = getBalanceFactor(tree);

  // For RR rotation
  if(balanceFactor > 1 && value < tree->left->data) {
    return RRrotation(tree);
  }

  // For LL rotation
  if(balanceFactor < -1 && value > tree->right->data) {
    return LLrotation(tree);
  }

  // For LR rotation
  if(balanceFactor > 1 && value > tree->left->data) {
    tree->left = LLrotation(tree->left);
    return RRrotation(tree);
  }

  // For RL rotation
  if(balanceFactor < -1 && value < tree->right->data) {
    tree->right = RRrotation(tree->right);
    return LLrotation(tree);
  }

  return tree;
}


// Creating the AVL tree by calling insert method repetadly
node *create(node *tree) {
  int value;

  cout<<"Enter the value to be inserted: ";
  cin>>value;

  while(value != -1) {
    tree = insert(tree, value);

    cout<<"Enter the value to be inserted: ";
    cin>>value;
  }

  return tree;
}

void inorderTraversal(node *tree) {
  if(tree != NULL) {
    inorderTraversal(tree->left);
    cout<<tree->data<<" ";
    inorderTraversal(tree->right);
  }
}


// MAIN FUNCTION
int main() {
  node *root = NULL;

  int option, value;

  do {
    cout<<"\n******* MENU *******\n"
        <<"1. Create\n"
        <<"2. Insert\n"
        <<"3. Inorder Traversal\n"
        <<"4. Height\n"
        <<"5. Exit\n";

    cout<<"Enter your option: ";
    cin>>option;

    switch(option) {
      case 1: root = create(root);
              break;

      case 2: cout<<"Enter the value to be inserted: ";
              cin>>value;

              root = insert(root, value);
              break;

      case 3: inorderTraversal(root);
              cout<<endl;
              break;

      case 4: value = avlHeight(root);
              cout<<"The height of the tree is "<<value<<endl;
              break;

      case 5: break;

      default: cout<<"Wrong option !\n";
               break;
    }
  } while(option != 5);

  if(option == 5) {
    // Freeing the space for root, after execution of the program
    delete root;

    cout<< "\nTHANK YOU for using the program !\n"
        <<"Have a good day.\n\n";
  }
}