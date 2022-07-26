#include<iostream>

using namespace std;

class Node{
public:
	int key;
	int data;
	Node* next;  

	Node()
	{
		key=0;
		data=0;
		next=NULL;
	}
	Node(int k,int d)
	{
		key = k;
		data = d;
	}

};

class CircularLinkedList
{
public:
	Node* head;

	CircularLinkedList()
	{
		head=NULL;
	}
	CircularLinkedList(Node *n)
	{
		head=n;
	}

	//1. Check if node exists using key value
	Node* nodeExists(int k)
	{
		Node* temp = NULL;
		Node* ptr = head;
		if(ptr==NULL)
		{
			return temp;
		}
		else
		{
			do
			{
				if(ptr->key==k)
				{
					temp=ptr;
				}
				ptr = ptr->next;
			}while(ptr!=head);
			return temp;
		}	
	}


	// 2. Append Node - Add a node at the end
	void appendNode(Node *n)
	{
		if(nodeExists(n->key)!=NULL)
		{
			cout<<"Node already exists with key value : "<<n->key<<". \nAppend another node with different Key value"<<endl;
		}
		else
		{
			if(head==NULL)
			{
				head = n;
				n->next = head;
				cout<<"Node Appended as Head node"<<endl;
			}
			else
			{
				Node* ptr = head;
				while(ptr->next!=head)
				{
					ptr = ptr->next;
				}
				ptr->next = n;
				n->next = head;
				cout<<"Node Appended"<<endl;	
			}
		}
	}

	//3. Prepend Node - Attach a node at the start
	void prependNode(Node* n)
	{
		if(nodeExists(n->key)!=NULL)
		{
			cout<<"Node already exists with key value : "<<n->key<<". Append another node with different Key value"<<endl;
		}
		else
		{
			if(head==NULL)
			{
				head = n;
				n->next = head;
				cout<<"Node Prepended as Head node"<<endl;
			}
			else
			{
				Node* ptr = head;
				while(ptr->next != head)
				{
					ptr = ptr->next;
				}
				ptr->next = n;
				n->next = head;
				head = n;
				cout<<"Node Prepended"<<endl;
			}
		}	
	}

	//4. Insert a Node after a particular node in the list
	void insertNodeAfter (int k,Node *n)
	{
		Node* ptr = nodeExists(k);
		if(ptr==NULL)
		cout<<"No node exists with key value: "<<k<<endl;
		else
		{
			if(nodeExists(n->key)!=NULL)
			{
				cout<<"Node already exists with key value : "<<n->key<<". Append another node with different Key value"<<endl;
			}
			else
			{	
				if(ptr->next==head)
				{
					n->next=head;
					ptr->next=n;
					cout<<"Node Inserted at the END"<<endl;
				}
				else
				{
					n->next=ptr->next;
					ptr->next=n;
					cout<<"Node Inserted in Between"<<endl;
				}
			}	
		}

	}

	//5. Delete node by unique key
	void deleteNodeByKey(int k)
	{
		Node* ptr = nodeExists(k);
		if(ptr==NULL)
		cout<<"No node exists with key value: "<<k<<endl;
		else
		{
			if(head->key==k)
				{
					if(head->next==head)
					{
						head=NULL;
						cout<<"Head node Unlinked... List Empty"<<endl;
					}
					else
					{		
						Node* ptr = head;
						while(ptr->next != head)
						{
							ptr = ptr->next;
						}
						ptr->next = head->next;
						head = head->next;
						cout<<"Head node Unlinked"<<endl;
					}
				}
					
				else
				{
					Node* temp=NULL;
					Node* prevptr = head;
					Node* currentptr = head->next;
					while(currentptr!=NULL)
					{
						if(currentptr->key==k)
						{
							temp = currentptr;
							currentptr = NULL;
						}
						else
						{
							prevptr = prevptr->next;
							currentptr = currentptr->next;
						}
					}
					
					prevptr->next = temp->next;
					cout<<"Node Unlinked with key value : "<<k<<endl;
				}	
		}	
	}

	//6. Update node by key
	void updateNodebyKey(int k, int d)
	{
		Node* ptr = nodeExists(k);
		if(ptr!=NULL)
		{
			ptr->data=d;
			cout<<"Node data updated successfully";
		}
		else
			cout<<"Node doesn't exist with key value : "<<k<<endl;
	} 	
	//7. Printing the list
	void printList()
	{
		if(head==NULL)
			cout<<"No nodes in Circular Linked List";
		else
		{
			cout<<"Head address : "<<head<<endl;
			cout<<"Circular Linked List Values : "<<endl;
			Node*temp = head;
			do
			{
				cout<<"("<<temp->key<<","<<temp->data<<","<<temp->next<<") --> ";
				temp = temp->next;
			}while(temp!=head);
		}
	}
};

int main()
{
	CircularLinkedList s;
	int option;
	int key1,k1,data1;
	do
	{
		cout<<"\n\nSelect an option to perform desired operation. Enter 0 to exit."<<endl;
		cout<<"1. appendNode()"<<endl;
		cout<<"2. prependNode()"<<endl;
		cout<<"3. insertNodeAfter()"<<endl;
		cout<<"4. deleteNodeByKey()"<<endl;
		cout<<"5. updateNodebyKey()"<<endl;
		cout<<"6. printList()"<<endl;
		cout<<"7. Clear screen"<<endl<<endl;

		cin>>option;
		Node*n1 = new Node();

		switch(option)
		{
			case 0:
				break;
			case 1: 
				cout<<"Append Node Operation \nEnter key & data of the Node to be Appended"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key = key1;
				n1->data = data1;
				s.appendNode(n1);
				break;
			case 2:
				cout<<"Prepend Node Operation \nEnter key & data of the Node to be Prepended "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key = key1;
				n1->data = data1;
				s.prependNode(n1);
				break;
			case 3:
				cout<<"Insert Node after Operation \nEnter key of existing node after which you want to Insert this New node: "<<endl;
				cin>>k1;
				cout<<"Enter key & data of the New Node first: "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key = key1;
				n1->data = data1;
				s.insertNodeAfter(k1,n1);
				break;
			case 4:
				cout<<"Delete Node By Key Operation - \nEnter key of the Node to be deleted: "<<endl;
				cin>>k1;
				s.deleteNodeByKey(k1);
				break;
			case 5: 
				cout<<"Update Node By Key Operation - \nEnter key & New data to be updated"<<endl;
				cin>>key1;
				cin>>data1;
				s.updateNodebyKey(key1,data1);
				break;			
			case 6:
				s.printList();
			 	break;				
			case 7:
				cout<<string(50, '\n');
				break;
			default:
				cout<<"Enter Proper Option number"<<endl;
				break;	
		}
	}
	while(option!=0);

	return 0;
}