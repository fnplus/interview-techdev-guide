import java.util.Scanner;
import java.lang.*; 
// Finding height of a binary search tree ;

// Node of a tree
class Node{
    int data ;
    Node left , right ;

    Node(int val){
        data = val;
        left = null ;
        right = null ;
    }
}

public class Tree{
    Node root ;
    Tree(){
        root = null;
    }

    // Function to insert node in BST 
    void insert(Node r , int key){
        root= insertHelper(r ,key);
    }
    Node insertHelper(Node r, int key) { 
    
            //If the tree is empty, create a new node and return
            if (r == null) { 
                r = new Node(key); 
                return r; 
            } 
            
            // else traverse down.
            if (key < r.data) 
                r.left = insertHelper(r.left, key); 
            else if (key > r.data) 
                r.right = insertHelper(r.right, key); 
    
            return r;
    }
    // FUNCTION 
    //Recursive Function for calculating Height of Binary Search Tree
    int height(Node node){
        if(node == null){
            return 0; 
        }
        else{
            return 1 + Math.max(height(node.left), height(node.right));
        }
    }
    
    
    void inorder()  { 
       inorderHelper(root); 
    } 
  
    // Function to do inorder traversal of BST 
    void inorderHelper(Node root) { 
        if (root != null) { 
            inorderHelper(root.left); 
            System.out.println(root.data); 
            inorderHelper(root.right); 
        } 
    } 

    // main function to test the height function
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int test = in.nextInt(); //test is number of nodes 
        Tree tree = new Tree();
        for( ; test > 0 ; test--){
            int temp = (int)(Math.random()*100);
            tree.insert(tree.root,temp); // Inserting random numbers in tree ;
        }
        
        //For printing constructed binary Tree uncomment the line below
        //tree.inorder(); 
  
        System.out.println("Height of the tree is " + tree.height(tree.root));
    }
}