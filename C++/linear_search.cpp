#include<iostream>

using namespace std;

void linearSearch(int a[],int n)
{
	int temp = -1;
	for(int i=0; i<5; i++)
	{
		if(a[i]==n)
		{
			cout<<"Element found at position "<<(i+1)<<endl;
			temp = 0;
		}	
	}
	if(temp==-1)
	cout<<"Element not found"<<endl;
}

int main()
{
	int arr[5], num;
	cout<<"Enter 5 elements"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>arr[i];
	}	
	cout<<"\nEnter the element to search ";
	cin>>num;
	cout<<endl;
	linearSearch(arr,num);	
	return 0;
}