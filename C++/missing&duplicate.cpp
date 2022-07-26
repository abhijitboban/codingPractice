#include<iostream>

using namespace std;

void find(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{	
		int count = 0;
		for(int j=i+1; j<size; j++)
		{
			if(arr[i]==arr[j])
				cout<<arr[i]<<" is duplicate"<<endl;
		}
		for(int k=0; k<size; k++)
		{
			if(arr[k]!=(i+1))
				count++;	
		}	
			
		if (count-size==0)
			cout<<(i+1)<<" is missing"<<endl;	
	}
}

void missing_and_duplicate(int arr[],int size)
{
	int check[(size+1)]={};
	for(int i=0; i<size; i++)
		(check[arr[i]])++;
	
	for (int j=1; j<=size; j++)
	{
		if(check[j]>1)
			cout<<"Duplicate number is "<<j<<endl;
		if(check[j]==0)
			cout<<"Missing number is "<<j<<endl;
	}
}


int main()
{
	int arr[] = {4,5,3,5,1,6};
	int size = sizeof(arr)/sizeof(int);
	missing_and_duplicate(arr,size);
	return 0;
}