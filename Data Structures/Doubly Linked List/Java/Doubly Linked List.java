// Java Class for Doubly Linked List
class Doubly_linkedList
{
   Node head; // list head
  
    /* Doubly Linked list Node*/
    class Node
    {
      int data;
      Node prev;
      Node next;
  
      //create a new node using constructor
      Node(int d) { data = d;
	}
}
  
// insert a node at the front of the list
public void insert_front(int new_data)
{
   /* 1. allocate node
   * 2. put in the data */
   Node new_Node = new Node(new_data);
  
   /* 3. Make next of new node as head and previous as NULL */
   new_Node.next = head;
   new_Node.prev = null;
  
   /* 4. change prev of head node to new node */
   if (head != null)
   head.prev = new_Node;
  
   /* 5. move the head to point to the new node */
   head = new_Node;
}
//insert a node after the given prev node
public void Insert_After(Node prev_Node, int new_data)
{
   //check that prev node is not null
   if (prev_Node == null)
   {
		System.out.println("The previous node is required,it cannot be NULL ");
		return;
	}
  
   //allocate new node and set it to data
   Node newNode = new Node(new_data);
  
   //set next of newNode as next of prev node
   newNode.next = prev_Node.next;
  
   //set new node to next of prev node
   prev_Node.next = newNode;
  
   //set prev of newNode as prev node
   newNode.prev = prev_Node;
  
   //set prev of new node's next to newnode
   if (newNode.next != null)
   newNode.next.prev = newNode;
}
  
// Add a node at the end of the list
void insert_end(int new_data)
{
   //allocate the node and set the data
   Node newNode = new Node(new_data);
   Node last = head; //set last as the head
   //set next of new node to null since its the last node
   newNode.next = null;
  
   //set new node as head if the list is null
   if (head == null) 
   {
      newNode.prev = null;
      head = newNode;
      return;
   }
   //if list is not null then traverse it till the last node and set last next to last
   while (last.next != null)
		last = last.next;
  
   last.next = newNode;           //set last next to new node
  
   newNode.prev = last;           //set last as prev of new node
}
// display the contents of linked list starting from the given node
public void displaylist(Node node)
{
   Node last = null;
   while (node != null) 
   {
      System.out.print(node.data + "<==>");
      last = node;
      node = node.next;
   }
   if(node == null)
   System.out.print("null");
   System.out.println();
  
   }
}
class Main{
   public static void main(String[] args)
      {
      /* Start with the empty list */
      Doubly_linkedList dll = new Doubly_linkedList();
  
      // Insert 40.
      dll.insert_end(40);
  
      // Insert 20 at the beginning.
      dll.insert_front(20);
  
      // Insert 10 at the beginning.
      dll.insert_front(10);
  
      // Insert 50 at the end.
      dll.insert_end(50);
  
      // Insert 30, after 20.
      dll.Insert_After(dll.head.next, 30);
  
      System.out.println("Doubly linked list created is as follows: ");
      dll.displaylist(dll.head);
      }
}