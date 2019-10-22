#include <bits/stdc++.h> 
using namespace std; 

class Node 
{ 
	public: 
	int data; 
	Node* next; 
	Node* prev; 
}; 

void push(Node** head_ref, int new_data) 
{ 
	Node* new_node = new Node(); 
	new_node->data = new_data; 

	new_node->next = (*head_ref); 
	new_node->prev = NULL; 
	if ((*head_ref) != NULL) 
		(*head_ref)->prev = new_node; 

	(*head_ref) = new_node; 
} 

void insertAfter(Node* prev_node, int new_data) 
{ 
	if (prev_node == NULL) 
	{ 
		cout<<"the given previous node cannot be NULL"; 
		return; 
	} 

	Node* new_node = new Node(); 

	new_node->data = new_data; 

	new_node->next = prev_node->next; 

	prev_node->next = new_node; 

	new_node->prev = prev_node; 

	if (new_node->next != NULL) 
		new_node->next->prev = new_node; 
} 

/* Given a reference (pointer to pointer) to the head 
of a DLL and an int, appends a new node at the end */
void append(Node** head_ref, int new_data) 
{ 
	Node* new_node = new Node(); 

	Node* last = *head_ref; 

	new_node->data = new_data; 

	new_node->next = NULL; 
	if (*head_ref == NULL) 
	{ 
		new_node->prev = NULL; 
		*head_ref = new_node; 
		return; 
	} 
	while (last->next != NULL) 
		last = last->next; 
	last->next = new_node; 
	new_node->prev = last; 

	return; 
} 


void printList(Node* node) 
{ 
	Node* last; 
	cout<<"\nTraversal in forward direction \n"; 
	while (node != NULL) 
	{ 
		cout<<" "<<node->data<<" "; 
		last = node; 
		node = node->next; 
	} 

	cout<<"\nTraversal in reverse direction \n"; 
	while (last != NULL) 
	{ 
		cout<<" "<<last->data<<" "; 
		last = last->prev; 
	} 
} 

int main() 
{ 
	Node* head = NULL; 
	append(&head, 26); 
	push(&head, 12); 
	push(&head, 4); 

	append(&head, 9); 

	insertAfter(head->next, 31); 

	cout << "Created DLL is: "; 
	printList(head); 

	return 0; 
} 

