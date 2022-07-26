#include<iostream>

using namespace std;

void merge(int arr[],int l,int m,int r)
{	
	int i=l,j=m+1,k=l;	
	int temp[5];
	while(i<=m && j<=r)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			i++,k++;
		}
	
		else
		{
			temp[k]=arr[j];
			j++,k++;
		}	
	}

	while(i<=m)
	{
		temp[k]=arr[i];
		i++,k++;
	}

	while(j<=r)
	{
		temp[k]=arr[j];
		j++,k++;
	}

	for(int p=l;p<=r;p++)
	{
		arr[p]=temp[p];
	}
}			


void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{	
		int m = (l+r)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r); 
		merge(arr,l,m,r);
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

	mergeSort(arr,0,4);

	cout<<"\nSorted array is : ";
	printArray(arr);

	return 0;
} 