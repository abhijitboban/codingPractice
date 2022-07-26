#include<iostream>

using namespace std;

int partition(int arr[],int s,int e)
{
	int pivot = arr[e];
	int pIndex = s;
	for(int i=s;i<e;i++)
	{
		if(arr[i]<=pivot)
		{
			int temp = arr[pIndex];
			arr[pIndex] = arr[i];
			arr[i] = temp;
			pIndex++; 
		}
	}
	int t = arr[pIndex];
	arr[pIndex] = arr[e];
	arr[e] = t;
	return pIndex;
}

void quickSort(int arr[],int s,int e)
{
	if(s<e)
	{	
		int p = partition(arr,s,e);
		quickSort(arr,s,p-1);
		quickSort(arr,p+1,e);
	}
}	
		

void printArray(int arr[])
{
	for(int i=0; i<5; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int arr[5];
	
	cout<<"Enter 5 numbers ";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}

	cout<<"\nUnsorted array is : ";
	printArray(arr);

	quickSort(arr,0,4);

	cout<<"\nSorted array is : ";
	printArray(arr);

	return 0;
} 