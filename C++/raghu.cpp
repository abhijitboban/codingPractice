#include <iostream>

using namespace std;

class Node{
public:
	int data;
	Node* next;  

	Node()
	{
		data=0;
		next=NULL;
	}
	Node(int d)
	{
		data = d;
	}
};

class SinglyLinkedList{
public:
	Node* head;

	SinglyLinkedList()
	{
		head=NULL;
	}
	SinglyLinkedList(Node *n)
	{
		head=n;
	}

	void appendNode(Node *n)
	{
	
			if(head==NULL)
			{
				head = n;
				cout<<"Node Appended"<<endl;
			}
			else
			{
				Node* ptr = head;
				while(ptr->next!=NULL)
				{
					ptr = ptr->next;
				}
				ptr->next = n;
				cout<<"Node Appended"<<endl;	
			}
	}

	void deletenode(int ele)
		{
			Node* temp=NULL;
			Node* current=NULL;
			if(head->data==ele)
			{
				temp=head;
				head=temp->next;
				temp=NULL;
			}
			else
			{
				current=head;
				while(current!=NULL)
				{
					if(current->next->data==ele)
					{
						temp=current->next;
						current->next=temp->next;
						temp=NULL;
					}
					current=current->next;
				}
			}
		}

		void printList()
	{
		if(head==NULL)
			cout<<"No nodes in Singly Linked List";
		else
		{
			cout<<endl<<"Singly Linked List Values : ";
			Node*temp = head;
			while(temp!=NULL)
			{
				cout<<"("<<temp->data<<") --> ";
				temp = temp->next;
			}
			cout<<endl;

		}
	}
};	


int main()
{
	SinglyLinkedList s;
	Node* n1 = new Node(10);
	s.appendNode(n1);
	Node* n2 = new Node(20);
	s.appendNode(n2);
	Node* n3 = new Node(30);
	s.appendNode(n3);
	s.printList();
	s.deletenode(30);
	s.printList();

	return 0;
}