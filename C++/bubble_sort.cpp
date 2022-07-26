#include<iostream>

using namespace std;

void bubbleSort(int arr[],int size)
{
	int temp;	
	for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			 {
			 	temp = arr[j];
			 	arr[j] = arr[j+1];
			 	arr[j+1] = temp;
			 }	
		}
		
	}
}

void printArray(int arr[], int size)
{
	for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int arr[] = {5, 4, 1, 3, 2};
	int size = sizeof(arr)/sizeof(int);
	
	cout<<"Unsorted array is : ";
	printArray(arr, size);

	bubbleSort(arr,size);

	cout<<"Sorted array is : ";
	printArray(arr, size);

	return 0;
} 