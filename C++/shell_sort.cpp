#include<iostream>

using namespace std;

void shellSort(int arr[])
{
	for(int g=4;g>0;g=g/2)
	{
		int i=0;
		for(i=g;i<9;i++)
		{
			while(i>=g && arr[i-g]>arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[i-g];
				arr[i-g] = temp;
				i=i-g;
			}
		}
	}
}

int main()
{
	int myarr[9];
	cout<<"Enter 9 numbers ";
	for(int i=0;i<9;i++)
	{
		cin>>myarr[i];
	}

	cout<<"\nUnsorted array ";
	for(int i=0;i<9;i++)
	{
		cout<<myarr[i]<<" ";
	}

	shellSort(myarr);

	cout<<"\nSorted array ";
	for(int i=0;i<9;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	return 0;
}