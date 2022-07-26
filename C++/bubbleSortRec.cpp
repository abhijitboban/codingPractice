#include<iostream>
#include<vector>
using namespace std;


void bubbleSort(vector<int> &arr, int n)
{
	if(n==0 || n==1)
		return;

	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
			swap(arr[i],arr[i+1]);
	}

	bubbleSort(arr,n-1);
}

int main()
{
	int n,j;
	vector<int> v;
	cout<<"Enter size of number list ";
	cin>>n;
	cout<<"Enter list of numbers to sort: ";
	for(int i=0;i<n;i++)
	{
		cin>>j;
		v.push_back(j);
	}
	bubbleSort(v,n);
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}