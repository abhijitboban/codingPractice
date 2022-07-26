
#include<iostream>
#include<string>

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

class Stack
{
private:
	Node *top;

public:

	Stack()
	{
		top = NULL;
	}

	bool isEmpty()
	{
		if(top==NULL)
			return true;
		else
			return false;
	}

	bool checkIfNodeExist(Node *n)
	{
		Node* temp = top;
		bool exist = false;
		while(temp!=NULL)
		{
			if(temp->key==n->key)
			{
				exist = true;
				break;
			}
			temp = temp->next;
		}
		return exist;
	}


	void push(Node* n)
	{
		{
			if(isEmpty())
			{
				top = n;
				cout<<"Node PUSHED successfully"<<endl;
			}
			else if(checkIfNodeExist(n))
			{
				cout<<"Same key not allowed"<<endl;
			}
			else
			{
				Node* temp = top;
				top = n;
				n->next = temp;
				cout<<"Node PUSHED successfully"<<endl;	
			}
		}
	}

	Node* pop()
	{
		Node *temp = NULL;
		if(isEmpty())
		{
			cout<<"Stack Underflow"<<endl;
			return temp;
		}
		else
		{
			temp = top;
			top = top->next;
			return temp;
		}
	}

	int count()
	{	
		Node* ptr = top;
		int count = 0;
		while(ptr!=NULL)
		{
			count++;
			ptr = ptr->next;
		}
		return count;	
	}
	

	Node* peek()
	{
		if(isEmpty())
		{
			cout<<"\nStack Underflow"<<endl;
			return NULL;
		}
		else
		{
			return top;
		}
	}

	void display()
	{	
		cout<<"All values in the Stack are: "<<endl;
		Node *ptr = top;
		while(ptr!=NULL)
		{
			cout<<"("<<ptr->key<<","<<ptr->data<<")"<<" -> "<<endl;
			ptr=ptr->next;
		}
		cout<<endl;		
	}
};

int main()
{
	Stack s1;
	int key,option,data;

	do
	{
		cout<<"Select an option to perform desired operation. Enter 0 to exit."<<endl;
		cout<<"1. Push()"<<endl;
		cout<<"2. Pop()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. peek()"<<endl;
		cout<<"5. count()"<<endl;
		cout<<"6. display()"<<endl;
		cout<<"7. Clear screen"<<endl<<endl;

		cin>>option;

		Node *new_node = new Node(); 
		
		switch(option)
		{
			case 0:
				break;
			case 1: 
				cout<<"Enter a key and value to push in the stack ";
				cin>>key>>data;
				new_node->key = key;
				new_node->data = data;
				s1.push(new_node);
				break;
			case 2:
				new_node = s1.pop();
				// if (new_node==NULL)
				// 	cout<<"Stack Underflow"<<endl;		
				cout<<"Pop Function called - Popped value: ("<<new_node->key<<","<<new_node->data<<")"<<endl;
				delete new_node;
				break;
			case 3:
				if(s1.isEmpty())
					cout<<"Stack is Empty"<<endl;
				else
					cout<<"Stack is not Empty"<<endl;
				break;
			case 4:
				if(s1.isEmpty())
				{
					cout<<"Stack is Empty"<<endl;
				} 
				else
				{
					cout<<"Peek Function called: "<<endl;
					new_node = s1.peek();
					cout<<" Top of stack is: ("<<new_node->key<<","<<new_node->data<<")"<<endl;
				}	
				break;
			case 5:
				cout<<"Count Function Called - \nNumber of items in the Stack: "<<s1.count()<<endl;
				break;
			case 6:
			 	cout<<"Display Function Called -"<<endl;
			 	s1.display();
			 	break;	
			case 7:
				cout<<string(50, '\n');
				break;
			default:
				cout<<"Enter Proper Option number"<<endl;	
		}
	}
	while(option!=0);

	return 0;
}