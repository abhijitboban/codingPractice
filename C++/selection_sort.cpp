#include<iostream>

using namespace std;

void selectionSort(int arr[],int size)
{
	int minIndex,temp;	
	for(int i=0; i<size-1; i++)
	{
		minIndex = i;
		for(int j=i+1; j<size; j++)
		{
			if(arr[minIndex]>arr[j])
			 minIndex = j;
		}
		if(minIndex!=i)
		{	
			temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
	}
}

int main()
{
	int arr[5];
	cout<<"Input 5 elements to sort ";
	for(int i=0; i<5; i++)
	{
		cin>>arr[i];
	}	
	cout<<"Unsorted array is : ";
	for(int i=0; i<5; i++)
		cout<<arr[i]<<" ";

	selectionSort(arr,5);

	cout<<"\nSorted array is : ";
	for(int i=0; i<5; i++)
		cout<<arr[i]<<" ";
	cout<<endl;

	return 0;
} 