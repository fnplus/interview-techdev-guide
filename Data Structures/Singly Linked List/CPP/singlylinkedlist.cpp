#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void insertHead(Node **head, int item);
void deleteNodeatPosition(Node **head, int position);
void insertAfter(Node **prev_node, int item);
void insertEnd(Node **head, int item);
void PrintAll(Node *head);
void InsertinPosition(int item, int position);
void Reverse(Node **head);
// ! Global Variable
Node *head = NULL;
int main()
{

    insertHead(&head, 5);
    insertAfter(&head, 22);
    insertEnd(&head, 54);
    InsertinPosition(3, 2);
    InsertinPosition(4, 3);
    deleteNodeatPosition(&head, 3);
    PrintAll(head);
    cout << "After Reversing the Linked List" << endl;
    Reverse(&head);

    return 0;
}

void insertHead(Node **head, int item)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = item;
    newNode->next = *head;
    *head = newNode;
    cout << " Inserted at Head " << newNode->data << endl;
}
void insertAfter(Node **prev_node, int item)
{
    Node *temp = *prev_node;
    if (temp == NULL)
    {
        cout << "Error ! Previous Node Cannot be NULL" << endl;
    }
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = item;
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Inserted  " << item << "before " << temp->data << endl;
}

void insertEnd(Node **head, int item)
{

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = item;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    Node *last = *head;

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
    cout << "Inserted  " << item << " at end " << endl;
}
void PrintAll(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
void InsertinPosition(int item, int position)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = item;
    newNode->next = NULL;
    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < position - 2; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteNodeatPosition(Node **head, int position)
{
    Node *temp1 = *head;
    if (position == 1)
    {
        *head = temp1->next;
        free(temp1);
    }
    else
    {
        Node *temp2 = temp1->next;
        for (int i = 0; i < position - 2; i++)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp2->next;
        free(temp2);
    }
}
void Reverse(Node **head)
{
    Node *current = *head;
    Node *prev = NULL, *next = NULL;
    while (current != NULL)

    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    PrintAll(*head);
}
