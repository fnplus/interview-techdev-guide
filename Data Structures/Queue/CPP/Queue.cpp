#include <cstdio>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <list>
using namespace std;

//SEFIRA KARINA

struct Node
{
	int number;
	struct Node *next;
} *head, * tail, *temp;

void deleteNode()
{
    Node *ptrNode;
    Node *prev; //pointer to the previous node

    if (!head)//don't do anything if the list is empty
        return;

    else
    {
        ptrNode = head->next;
        delete head;//delete the head if requested
        head = ptrNode;
    }
}

void printNode()
{

	temp=head;

	while(temp != NULL)
    {
		cout<<" "<<temp->number;
		temp=temp->next;
	}
	cout<< endl;

}
void addNode(int x)
{
	temp = new Node;
	temp->next = NULL;
	temp->number = x;
	if(head == NULL)
    {
		head = tail = temp;
	}
	else
	{
		tail-> next = temp;
		tail = temp;
	}
}

int main(void)
{
    head=tail=NULL;

    addNode(5);
	addNode(3);
	addNode(1);
	addNode(9);

    int x;
    int choice;


    cout<<"here's the queue : ";
    printNode();



    while(1)
    {

        cout<<endl<<endl<<"1.push" <<endl<<"2.pop "<<endl<<"3.exit"<<endl<<"choose (1-3) : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<endl<<"input a number to push : ";
                cin>>x;
                addNode(x);

                cout<<endl<<"here's the new queue : ";
                printNode();

                break;
            case 2:
                deleteNode();
                cout<<endl<<"here's the new queue : ";
                printNode();
                break;

            case 3:
                return 0;

            default:
                cout<<"\nPlease enter correct choice(1-3)!!";
                break;
        }
    }
}
