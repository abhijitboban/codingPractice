#include<iostream>
#include<string>

using namespace std;

class Stack
{
private:
	int top;
	int arr[5];

public:
	Stack()
	{
		top = -1;
		for(int i=0; i<5; i++)
		{
			arr[i]=0;
		}
	}

	bool isEmpty()
	{
		if(top==-1)
			return true;
		else
			return false;
	}

	bool isFull()
	{
		if(top==4)
			return true;
		else
			return false;
	}

	void push(int val)
	{
		if(isFull())
			cout<<"Stack Overflow"<<endl;
		else
		{
			top++;
			arr[top]=val;
		}
	}

	int pop()
	{
		if(isEmpty())
		{
			return 0;
		}
		else
		{
			int popValue=arr[top];
			arr[top] = 0;
			top--;
			return popValue;
		}
	}

	int count()
	{	
		return (top+1);
	}

	int peek(int pos)
	{
		if(isEmpty())
		{
			cout<<"Stack Underflow"<<endl;
			return 0;
		}
		else
		{
			return arr[pos];
		}
	}

	void change(int pos, int val)
	{
		arr[pos]=val;
		cout<<"Value changed at location "<<pos<<endl;
	}

	void display()
	{	
		cout<<"All values in the Stack are "<<endl;
		for(int i=4; i>=0; i--)
		{
			cout<<arr[i]<<endl;
		}
	}
};

int main()
{
	Stack s1;
	int option,position,value;

	do
	{
		cout<<"Select an option to perform desired operation. Enter 0 to exit."<<endl;
		cout<<"1. Push()"<<endl;
		cout<<"2. Pop()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. Clear screen"<<endl<<endl;

		cin>>option;
		int a;
		switch(option)
		{
			case 0:
				break;
			case 1: 
				cout<<"Enter an item to push in the stack ";
				cin>>value;
				s1.push(value);
				break;
			case 2:
				a = s1.pop();
				if (a==0)
					cout<<"Stack Underflow"<<endl;		
				cout<<"Pop Function called - Popped value: "<<a<<endl;
				break;
			case 3:
				if(s1.isEmpty())
					cout<<"Stack is Empty"<<endl;
				else
					cout<<"Stack is not Empty"<<endl;
				break;
			case 4:
				if(s1.isFull())
					cout<<"Stack is Full"<<endl;
				else
					cout<<"Stack is not Full"<<endl;
				break;
			case 5: 
				cout<<"Enter position of item to peek ";
				cin>>position;
				cout<<"Peek Function called - \nValue at position "<<position<<"is "<<s1.peek(position)<<endl;
				break;
			case 6:
				cout<<"Count Function Called - \nNumber of items in the Stack are "<<s1.count()<<endl;
				break;
			case 7:
				cout<<"Change Function Called -"<<endl;
				cout<<"Enter position of item to change ";
				cin>>position;
				cout<<"Enter new value of item ";
				cin>>value;
				s1.change(position,value);
				break;	
			case 8:
			 	cout<<"Display Function Called -"<<endl;
			 	s1.display();
			 	break;	
			case 9:
				cout<<string(50, '\n');
				break;
			default:
				cout<<"Enter Proper Option number"<<endl;	
		}
	}
	while(option!=0);

	return 0;
}