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

class Queue
{
private:
	Node* front;
	Node* rear;
public:
	Queue()
	{
		front = NULL;
		rear = NULL;
	}

	bool isEmpty()
	{
		if(front==NULL && rear == NULL) 
			return true;
		else
			return false;
	}

	void enqueue(Node* n)
	{
		if(isEmpty())
		{
			front = rear = n;
			n->next = NULL;
		}
		
		else
		{
			Node* temp = rear;
			rear = n;
			temp->next=n;
			n->next=NULL;
		}
	}

	int dequeue()
	{
		int x;
		if(isEmpty())
		{
			return 0;
			cout<<"Queue is Empty"<<endl;
		}
		
		else if(front == rear)
		{
			x = arr[front];
			arr[front] = 0;
			front = -1;
			rear = -1;
		}

		else
		{
			x = arr[front];
			arr[front] = 0;
			front++;
		}

		return x;
	}

	int count()
	{	
		return (rear-front+1);
	}

	void display()
	{	
		cout<<"All values in the Queue are "<<endl;
		for(int i=0; i<5; i++)
		{
			cout<<arr[i]<<" ";
		}
	}
};

int main()
{
	Queue q1;
	int option,value;

	do
	{
		cout<<"\n\nSelect an option to perform desired operation. Enter 0 to exit."<<endl;
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. Dequeue()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. count()"<<endl;
		cout<<"6. display()"<<endl;
		cout<<"7. Clear screen"<<endl<<endl;

		cin>>option;
		int a;
		switch(option)
		{
			case 0:
				break;
			case 1: 
				cout<<"Enqueue Operation \nEnter an item to Enqueue ";
				cin>>value;
				q1.enqueue(value);
				break;
			case 2:
				a = q1.dequeue();
				if (a==0)
					cout<<"Queue is Empty"<<endl;		
				cout<<"Dequeue Operation \nDequeued value: "<<a<<endl;
				break;
			case 3:
				if(q1.isEmpty())
					cout<<"Queue is Empty"<<endl;
				else
					cout<<"Queue is not Empty"<<endl;
				break;
			case 4:
				if(q1.isFull())
					cout<<"Queue is Full"<<endl;
				else
					cout<<"Queue is not Full"<<endl;
				break;
			case 5: 
				cout<<"Count Operation \nCount of items in Queue : "<<q1.count()<<endl;
				break;			
			case 6:
				cout<<"Display Function called"<<endl;
			 	q1.display();
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