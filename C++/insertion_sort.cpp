#include<iostream>

using namespace std;

void insertionSort(int arr[],int size)
{
	int key,j;	
	for(int i=0; i<size; i++)
	{
		key = arr[i];
		j = i - 1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--; 
		}
		arr[j+1] = key;
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

	insertionSort(arr,size);

	cout<<"Sorted array is : ";
	printArray(arr, size);

	return 0;
} 