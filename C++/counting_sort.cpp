#include<iostream>

using namespace std;

void countingSort(int arr[])
{	
	int count_arr[10];
	int output_arr[7];
	for(int i=0;i<10;i++)
	{
		count_arr[i]=0;
	}
	for(int j=0;j<7;j++)
	{
		count_arr[arr[j]]++;
	}
	for(int k=1;k<10;k++)
	{
		count_arr[k]=count_arr[k]+count_arr[k-1];
	}
	for(int i=0;i<7;i++)
	{
		output_arr[--count_arr[arr[i]]]=arr[i];
	}
	for(int i=0;i<7;i++)
	{
		arr[i]=output_arr[i];
	}
}

int main()
{
	int myarr[7];
	cout<<"Enter 7 numbers ";
	for(int i=0;i<7;i++)
	{
		cin>>myarr[i];
	}

	cout<<"\nUnsorted myarray ";
	for(int j=0;j<7;j++)
	{
		cout<<myarr[j]<<" ";
	}

	countingSort(myarr);

	cout<<"\nSorted array ";
	for(int k=0;k<7;k++)
	{
		cout<<myarr[k]<<" ";
	}
	cout<<endl;
	return 0;
}